#!/bin/bash
# To test this Bash you need to uncomment the variables below. uncomment only to test. To push to the system these lines can't be uncomment.

#-------------Teste 1
#str1="\'?"
#str2='"\"'
#str3="'"
#str4='\'
#FT_NBR1=$str1$str2$str3$str4
#FT_NBR2=rcrdmddd

#-------------Teste 2
#excl="!"
#barraspas='\"\"'
#FT_NBR1=$barraspas$excl$barraspas$excl$barraspas$excl$barraspas$excl$barraspas$excl$barraspas
#FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

echo $FT_NBR1 + $FT_NBR2 | \ # Concatenate the two strings
	sed "s/'/0/g" | \ # Replaces simple quotes with 0
	tr '\\"?!' 1234 | \ # Replaces '\' 'by 1, '"' by 2, '?' By 3 and '!' By 4
	tr 'mrdoc' 01234 | \ # Replaces m by 0, r by 1, d by 2, o by 3 and c by 4.
	xargs echo 'obase=13; ibase=5;' | \ # It defines that the input base is 5, and the output is 13.
	bc | \ # Execute the conversion between the two bases.
	tr 0123456789ABC 'gtaio luSnemf' # Replaces the digits of base 13 with the past dictionary

