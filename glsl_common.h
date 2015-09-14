#ifndef GLSL_COMMON
#define GLSL_COMMON

#include <stdint.h>

struct glsl_node {
	int code:16;
	int child_count:16;
	union {
		double d;
		float f;
		int i;
		unsigned int ui;
		bool b;
		const char *str;
	} data;	
	intptr_t children[];
};

struct node *new_node(int code, ...) __attribute__ ((sentinel));

#endif
