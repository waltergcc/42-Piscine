#!/bin/sh
# To test this Bash you need to uncomment the variables below. uncomment only to test. To push to the system these lines can't be uncomment.
#FT_LINE1=7 
#FT_LINE2=15 

cat /etc/passwd | \ # Show the content about system logins
	sed '/^#/d' | \ # Removes the lines with comments
	awk 'NR%2==0' | \ # Select only the odd lines
	cut -d: -f1 | \ # It extracts the first column before the ":". In this case the username.
	rev | \ # Reverses the order of characters
	sort -r | \ # Order in reverse order alphabetical
	sed -n "${FT_LINE1},${FT_LINE2}p" | \ # Prints the lines that are among the past variables
	tr '\n' ' '  | \ # Replaces the new line with space
	sed 's+ +, +g' | \ # Replaces the spaces with comma followed by space.
	sed 's+, $+.+g' | \ # Replaces the last comma with point.
	tr -d '\n' # Removes the new line at the end