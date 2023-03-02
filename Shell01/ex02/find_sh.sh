#!/bin/bash
find . -type f -name '*.sh' -execdir basename -s '.sh' {} +
# find .: Search in the current directory and its subdireories.
# -type f: Search only files.
# -name '*.sh': Search files that end with the .sh extension.
# -execdir basename -s '.sh': Extracts the name of the file without the path and without the suffix .sh
# {} +: Run the command to multiple files at once.