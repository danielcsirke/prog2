#include <stdio.h>
#include "printing.h"
// #define _CRT_SECURE_NO_WARNINGS -> akkor használom, ha a rendes scanf-et szeretném használni, hátrány: kiüt sok ellenőrzést


int main() {


	int N = 0;
	char S[10];
	scanf_s("%d", &N);
	scanf_s("%s",S, (unsigned)sizeof(S));

	F(N, S);

	return 0;
}