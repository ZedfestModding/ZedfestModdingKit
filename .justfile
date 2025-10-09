# Cross platform shebang:
shebang := if os() == 'windows' {
  'powershell.exe'
} else {
  '/usr/bin/env pwsh'
}

# Set shell for non-Windows OSs:
set shell := ["powershell", "-c"]

# Set shell for Windows OSs:
set windows-shell := ["powershell.exe", "-NoLogo", "-Command"]

# If you have PowerShell Core installed and want to use it,
# use `pwsh.exe` instead of `powershell.exe`


alias list := default

default:
  just --list

setup:
  uv venv

clean:
  if (Test-Path ".venv") { Remove-Item ".venv" -Recurse -Force }
  git clean -d -X --force

commit:
  uv run cz commit

commit_retry:
  uv run cz commit --retry

tempo_json := justfile_directory() + "/.tempo.json"

alias tma := test_mods_all

test_mods_all:
  uv run tempo_cli test_mods_all --settings_json "{{tempo_json}}"

alias fra := full_run_all

full_run_all:
  uv run tempo_cli full_run_all --settings_json "{{tempo_json}}"
