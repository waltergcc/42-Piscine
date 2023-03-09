Assignment name  : count_alpha
Expected files   : count_alpha.c
Allowed functions: write, printf
--------------------------------------------------------------------------------

Write a Count_alpha program that takes a chain and displays the number of occurrences
of its alphabetical characters.The other characters are not counted.Order is the order of appearance in the chain.
The display must be finished with a Newline.

The format is in examples.

If the number of arguments is not 1, just display a newline.

Exemples :
$> ./count_alpha abbcc
1a, 2b, 2c
$> ./count_alpha "abbcc"
1a, 2b, 2c
$> ./count_alpha "abbcc" "dddeef" | cat -e
$
$> ./count_alpha "My Hyze 47y 7." | cat -e
1m, 3y, 1h, 1z, 1e$
$> ./count_alpha "" | cat -e
$