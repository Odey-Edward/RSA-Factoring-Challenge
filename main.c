#include "main.h"

int main(int argc, char *argv[])
{
	FILE *fs;

	/* usage check */
	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}

	/* open file */
	fs = fopen(argv[1], "r");
	if (fs == NULL)
		exit(EXIT_FAILURE);

	readlines(fs);

	fclose(fs);

	return (0);
}
