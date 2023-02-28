#!/bin/bash
# Para testar esse bash é necessário descomentar as varíaveis abaixo. Descomentar apenas para testar. Para subir ao sistema precisa estar comentado ou deletar essas linhas.

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

echo $FT_NBR1 + $FT_NBR2 | \ #Concatena as duas strings
	sed "s/'/0/g" | \ #Substitui aspas simples por 0
	tr '\\"?!' 1234 | \ #Substitui \ por 1, " por 2, ? por 3 e ! por 4
	tr 'mrdoc' 01234 | \ #Substitui m por 0, r por 1, d por 2, o por 3 e c por 4.
	xargs echo 'obase=13; ibase=5;' | \ #Define que a base de entrada é 5, e a de saída é 13.
	bc | \ #Executa a conversão entre as duas bases.
	tr 0123456789ABC 'gtaio luSnemf' #Substitui os digitos da base 13 pela cifra passada

