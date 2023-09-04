#include "main.h"

void do_math(mpz_t dividend, mpz_t square_root)
{
	int is_divisible;
	unsigned long int ui = 2;
	mpz_t divisor, quotient;

	mpz_init(quotient);

	mpz_init_set_ui(divisor, ui);
	while (divisor <= square_root)
	{
		is_divisible = mpz_divisible_p(dividend, divisor);

		if (is_divisible != 0)
		{
			mpz_cdiv_q(quotient, dividend, divisor);

			gmp_printf("%Zd=%Zd*%Zd\n", dividend, quotient, divisor);
			mpz_clear(quotient);
			mpz_clear(divisor);
			return;
		}

		ui++;
		mpz_init_set_ui(divisor, ui);
	}


	mpz_clear(quotient);
	mpz_clear(divisor);
}
