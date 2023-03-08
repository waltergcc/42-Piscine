// #include <stdio.h>
#include <stdlib.h>

// check if a character is a separator
int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	// goes through all the characters of 'sep'
	while (sep[i])
	{
		// If it's any of the separators, the return is 1
		if (c == sep[i])
			return (1);
		i++;
	}

	// If not a separator the return is 0
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;

	// runs all the string
	while (str[i])
	{
		// If it's not a separate, 'words' is increased
		// if it's a separator, 'i' is increased (go to next char)
		if (!is_separator(str[i], sep))
		{
			words++;
			
			// While the string is not over and is not a separator, 'i' is increased
			while (str[i] && !is_separator(str[i], sep))
				i++;
		}
		else
			i++;
	}

	// returns the count of words
	return (words);
}

char	*word_splitter(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;

	// Count the lenght of the word until it reachs the end and is not a separator
	while (str[i] && !is_separator(str[i], sep))
		i++;

	// allocate the memory to 'Word' in the size counted
	word = (char *) malloc(sizeof(char *) * (i + 1));
	if (word == NULL)
		return (NULL);

	// 'i' needs to receive 0
	i = 0;

	// While the string is not over and is not a separator
	// 'Word' receives what is in string
	while (str[i] && !is_separator(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';

	// Returns the splitted string
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;

	// 'Words' is a set of strings
	char	**words;

	i = 0;
	j = 0;

	// 'Words' receives memory allocation in the size of the words + 1
	words = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1));

	// If any of the strings is null, the return is null
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);

	// runs all the string
	while (str[i])
	{
		// If it's not a separate, 'words' receives the word splitted
		if (!is_separator(str[i], charset))
		{
			words[j] = word_splitter(&str[i], charset);

			// While the string is not over and is not a separator, 'i' is increased
			while (str[i] && !is_separator(str[i], charset))
				i++;
			
			// Go to the next index of Words
			j++;
		}

		// if it's a separator, 'i' is increased (go to next char)
		else
			i++;
	}

	// In the end Words need to receive 0
	words[j] = 0;
	return (words);
}
/* 
int	main(void)
{
	char	*str = "Words to.be/splitted*in@six";
	char	*sep = "./*@! ";
	char	**words = ft_split(str, sep);
	int i = 0;

	printf("Before: %s\nAfter: \n", str);
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
} */