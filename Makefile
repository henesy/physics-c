#leaning towards just going plan9-only, so this might be moot, but…

CC=9c
LD=9l
CFLAGS=
LDFLAGS=
#$O should be 6 for amd64 and 8 for 386
O=6


all: physics

physics: physics.c error.c
	$CC $CFLAGS -o physics.$O physics.c error.c

clean: 
	rm *.$O

demo: physics
	$CC $CFLAGS -o demo.$O demo.c
	$LD $LDFLAGS -o demo demo.$O physics.$O

