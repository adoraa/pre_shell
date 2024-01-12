#include "shell.h"
#define MAX_WORDS 256
/**
 * split_str - splits strings into an array of words with strok
 * @in: user input
 * @delim: delimiter
 * @wc: word count
 * Return: split string
 */
char **split_str(const char *in, const char *delim, size_t *wc)
{
	char **words, *token, *copy;
	size_t count = 0;

	words = (char **)malloc(MAX_WORDS * sizeof(char *));
	if (words == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	} copy = strdup(in);
	if (copy == NULL)
	{
		perror("strdup");
		exit(EXIT_FAILURE);
	} token = strtok(copy, delim);
	while (token)
	{
		words[count] = strdup(token);
		if (words[count] == NULL)
		{
			perror("strdup");
			exit(EXIT_FAILURE);
		} token = strtok(NULL, delim);
		count++;
		if (count == MAX_WORDS)
		{
			printf("Error: Too many words");
			exit(EXIT_FAILURE);
		}
	} free(copy);
	*wc = count;
	return (words);
}
