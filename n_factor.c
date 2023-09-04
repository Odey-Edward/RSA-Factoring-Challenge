#include "main.h"

void n_factor(char *buf)
{
	mpz_t value, sqroot;

	mpz_init(value);
	mpz_init(sqroot);

	mpz_set_str(value, buf, 10);
	mpz_sqrt(sqroot, value);

	do_math(value, sqroot);

	mpz_clear(value);
	mpz_clear(sqroot);

}
