#include <stdio.h>

int is_alpha(char c)
{
    // Returns 1 if the received Char is Alpha
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int to_lower(char c)
{
    // If the char is uppercase, it converts in lowercase
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    else
        return c;
}

void ft_print(int *count)
{
    int first = 1;
    int i = 0;

    while (i < 26)
    {
        // only prints the values of 'count' that is greater than 0
        if (count[i] > 0)
        {
            // sif 'first' is zero, it prints the comma
            if (!first)
                printf(", ");
            // Print what is in Count followed by the character
            printf("%d%c", count[i], 'a' + i);

            // the first time 'First' receives 0
            first = 0;
        }
        i++;
    }
}

void ft_count_alpha(char *str)
{
    // All count values start with zero
    int count[26] = {0};
    int i = 0;

    while (str[i])
    {
        // If the char is alpha, The counter for this letter is increased
        if (is_alpha(str[i]))
        {
            // to_low function converts everything into lowercase
            // 'Count' in the position of the letter is increased
            count[to_lower(str[i]) - 'a']++;
        }
        i++;
    }
    ft_print(count);
}

int main(int argc, char **argv)
{
	// only calls the function if you have only 2 arguments
    if (argc == 2)
        ft_count_alpha(argv[1]);

	// Print the new line at the end
    printf("\n");
}