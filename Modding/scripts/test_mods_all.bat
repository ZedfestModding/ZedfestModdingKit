@echo off

cd /d "%~dp0"

cd ../..

uv run tempo_cli run test_mods_all --settings_json .tempo.json

exit /b