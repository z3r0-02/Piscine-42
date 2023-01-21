#!/bin/sh

find . -type f -name "*.sh" -exec basename {} .sh \;

# -type f (file)
# * means all
# basename removes extensions from the file name
# ; ends the exec command
