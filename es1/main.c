#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "dimezza.h"
#include "quadrato.h"

static double salva = 0.0;

int main() {
	double x = 13.17;
	salva = funzione2(funzione1(x));
	printf("Risultato = %f.\n", salva);
	return 0;
}
