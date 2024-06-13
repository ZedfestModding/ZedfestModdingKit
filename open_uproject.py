import os
import subprocess

def open_uproject_files(directory):
    files = os.listdir(directory)
    uproject_files = [file for file in files if file.endswith(".uproject")]

    for uproject_file in uproject_files:
        file_path = os.path.join(directory, uproject_file)

        try:
            subprocess.Popen(["start", "", file_path], shell=True)

        except Exception as e:
            print(f"Error opening {file_path}: {e}")

if __name__ == "__main__":
    script_directory = os.path.dirname(os.path.realpath(__file__))
    open_uproject_files(script_directory)
