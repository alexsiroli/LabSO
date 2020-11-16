#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>

static double salva = 0.0;

double funzione1(double d) {
	salva = cos(d)/2.0;
	return salva;
}

