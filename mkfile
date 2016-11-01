</$objtype/mkfile

#see: mk(1)


physics:	physics.c error.c
	$CC $CFLAGS -o $target.6 $prereq

%.$O:	%.c
	rm $stem.$O

clean:	
	rm *.$O

nuke:V:	clean

bind:
	bind -a /sys/bnet/docs/physics doc

demo:V: physics
	$CC $CFLAGS demo.c
	$LD $LDFLAGS -o $target demo.$O physics.$O
