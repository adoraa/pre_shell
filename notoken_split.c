#include "shell.h"
#define MAX_WORDS 256
/**
 * notoken_split - splits a string without using strtok
 * @in: input string
 * @delim: delimiter
 * @wc: word count
 * Return: split string
 */
char **notoken_split(const char *in, const char *delim, size_t *wc)
{
	char **words = (char **)malloc(MAX_WORDS * sizeof(char *));
	size_t count = 0, i = 0, j, length, w_zero = 0;

	if (words == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	} while (in[i] != '\0')
	{
		while (in[i] != '\0' && strchr(delim, in[i]) != NULL)
			i++;
		if (in[i] != '\0')
		{
			w_zero = i;
			while (in[i] != '\0' && strchr(delim, in[i]) == NULL)
				i++;
			length = i - w_zero;
			words[count] = (char *)malloc((length + 1) * sizeof(char));
			if (words[count] == NULL)
			{
				perror("malloc");
				exit(EXIT_FAILURE);
			} for (j = 0; j < length; ++j)
				words[count][j] = in[w_zero + j];
			words[count][length] = '\0';
			count++;
			if (count == MAX_WORDS)
			{
				printf("Error: Too many words");
				exit(EXIT_FAILURE);
			}
		}
	} *wc = count;
	return (words);
}
