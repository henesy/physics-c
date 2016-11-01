#include <u.h>
#include <libc.h>
#include "physics.h"

/***
Equations are derived from a variety of sources, good references include:
• http://ipl.physics.harvard.edu/wp-uploads/2013/03/PS3_Error_Propagation_sp13.pdf
***/


/* this/these should be made variadic functions(arg1, arg2, …) */
/* propagation of error through addition */
Uncertainty propadd(Uncertainty a, Uncertainty b)
{
	Uncertainty u;
	u.v = a.v + b.v;
	u.u = sqrt(pow(a.u, 2) + pow(b.u, 2));
	return u;
}

