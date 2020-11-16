#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static double salva = 0.0;

double funzione2(double d) {
	salva =  d*d;
	return salva;
}
