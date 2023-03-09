Assignment name  : str_maxlenoc
Expected files   : str_maxlenoc.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes n strings as parameters and displays, 
followed by a newline, the longest string of characters included 
in all the parameters passed. If several strings correspond, 
the one that appears first in the first parameter will be displayed. 
Note that "" is necessarily in all strings.

If no parameter is transmitted, the program should display '\n'.

Let A and B be strings of characters. We say that A is included 
in B if A is a substring of B or if A and B are identical.

Examples:
$>./str_maxlenoc ab bac abacabccabcb
a
$>./str_maxlenoc bonjour salut bonjour bonjour
u
$>./str_maxlenoc xoxAoxo xoxAox  oxAox oxo  A ooxAoxx oxooxo Axo | cat -e
$
$>./str_maxlenoc bosdsdfnjodur atehhellosd afkuonjosurafg headfgllosf fghellosag afdfbosnjourafg
os
$>./str_maxlenoc | cat -e
$