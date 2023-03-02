#!/bin/bash
id -nG $FT_USER | tr -s ' ' ',' | tr -d '\n'
# id -nG $FT_USER: Print on the output the name of the user groups.
# tr -s ' ' ',': replaces all spaces with commas.
# tr -d '\n': Removes the new line.