#include "miniasm.h"

int ma_verbose = 3;

void ma_opt_init(ma_opt_t *opt)
{
	opt->min_span = 1000;
	opt->min_match = 100;
	opt->min_dp = 3;
	opt->min_iden = .05;

	opt->max_hang = 1000;
	opt->min_ovlp = 2000;
	opt->gap_fuzz = 1000;
	opt->int_frac = .8;
}