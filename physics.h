/* enumerated type to represent direction */
typedef enum {N, E, S, W, NE, SE, NW, SW} direction;

/* structure type to represent vectors */
typedef struct
{
	direction	dir;
} vector;

/* structure type to represent uncertainty values */
typedef struct
{
	double	u; /* uncertainty value */
	double	v; /* numerically measured value */
} uncertainty;

