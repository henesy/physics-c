</$objtype/mkfile

#see: mk(1)


physics:	physics.c error.c
	$CC $CFLAGS -o $target $prereq

%.$O:	%.c
	rm $stem.$O

clean:	
	rm *.$O

nuke:V:	clean

bind:
	bind -a /sys/bnet/docs/physics /sys/hg/physics-c/doc

