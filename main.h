#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <gmp.h>

void do_math(mpz_t dividend, mpz_t square_root);
void readlines(FILE *fs);
void n_factor(char *buf);
#endif
