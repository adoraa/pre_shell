#include "shell.h"
/**
 * main - testcase for split string function
 * Return: 0 on success
 */
int main(void)
{
	const char *in = "I’m not a code hoarder, I’m just passionate about version control.";
	const char *delim = " ";
	size_t wc, i;
	char **words = split_str(in, delim, &wc);

	printf("String = %s\n\n", in);
	for (i = 0; i < wc; ++i)
	{
		printf("Word %zu: %s\n", i + 1, words[i]);
		free(words[i]);
	}
	words = notoken_split(in, delim, &wc);
	printf("\nWithout strtok\n");
	for (i = 0; i < wc; ++i)
	{
		printf("Word %zu: %s\n", i + 1, words[i]);
		free(words[i]);
	}
	free(words);
	return (0);
}
