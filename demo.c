#include <u.h>
#include <libc.h>
#include "physics.h"


/* demonstration/testing for using Physics-C */
void main()
{
	/* propadd() test from error.c */
	Uncertainty a;
	Uncertainty b;
	a.v = 3.0;
	b.v = 5.0;
	a.u = 0.02;
	b.u = 0.05;
	Uncertainty c = propadd(a, b);
	print("(%f ± %f) + (%f ± %f) = (%f ± %f)\n", a.v, a.u, b.v, b.u, c.v, c.u);

	


	exits(nil);
}
