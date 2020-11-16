#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include "macro.h"

int main() {
	int32_t *p;
	int i;

	ALLOCAVETTORE(p);
	for (i=0; i<10; i++) {
		p[i] = -19+i;
	}
	for (i=0; i<10; i++) {
		printf("%d", p[i]);
		fflush(stdout);
	}
	printf("\n");
	return(0);
}
