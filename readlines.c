#include "main.h"

void readlines(FILE *fs)
{
	char buf[1024];

	while (fgets(buf, 1024, fs) != NULL)
	{
		buf[strlen(buf) - 1] = 0;


		/* compute the factor */
		n_factor(buf);
		
	}

}
