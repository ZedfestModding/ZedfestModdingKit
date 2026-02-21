@echo off

cd /d "%~dp0"

cd ../..

uv run tempo_cli clean full --settings_json .tempo.json

exit /b