#!/bin/bash
ls -l | sed -n 'p;n'
# ls -l: lists files and directories in more detail.
# sed: Edit the text flow to output.
# -n: Sed output is done according to the past standard
# p: Prints the current line of the input.
# n: Skip the nect line.