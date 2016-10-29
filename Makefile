#leaning towards just going plan9-only, so this might be moot, but…

CC=cc
CFLAGS=-c
O=6


all: physics

physics: physics.c error.c
	$CC $CFLAGS -o physics physics.c error.c

clean: 
	rm *.$O

