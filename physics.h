/* gravity constant */
#define G 9.81


/* enumerated type to represent direction */
typedef enum {N, E, S, W, NE, SE, NW, SW} Direction;


/* represent a force (F = m * a) */
typedef struct
{
	Direction dir;
	double	m; /* mass */
	double	a; /* acceleration */
} Force;

/* represent vectors */
typedef struct
{
	Direction	dir;
} Vector;

/* represent uncertainty values */
typedef struct
{
	double	u; /* uncertainty value */
	double	v; /* numerically measured value */
} Uncertainty;

/*** exported function prototypes ***/
/* error.c */
Uncertainty prop_add(a Uncertainty, b Uncertainty);

