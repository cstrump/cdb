#ifndef GLUE_INCLUDED
#define GLUE_INCLUDED

/* $Id$ */

struct module {
	unsigned int uname;
	char *bpflags;
	void **addresses;
};

struct sframe {
        struct sframe *up, *down;
        int func;
        struct module *module;
        int ip;
};

#endif
