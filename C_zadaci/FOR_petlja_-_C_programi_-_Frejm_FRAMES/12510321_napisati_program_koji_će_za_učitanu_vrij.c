/*
 * ZADATAK 12510321 - 12510321
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120c/12510321.htm
 */

#include <stdio.h>

int main ()
{
int i, n, k;
double s, p, s1, s2;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s1 = 0;		// pocetna vrijednost sume neparnih - pozitivni
s2 = 0; 	// pocetna vrijednost sume parnih - negativni
p = 1;		// pocetna vrijednost proizvod

for(i=1; i <= n; ++i) {	// ponavljanje za i=1 do i=n - pocetak petlje
p = p * k * i;     	// proizvod - p *= k*i;
if (i % 2 == 0)		// djeljivi sa 2 - parnin
s2 = s2 + p;	// suma parnih - negativni
else
s1 = s1 + p;	// suma neparnih - pozitivni
}  						// for - kraj petlje
s = s1 - s2;			// razlika suma

printf("Suma faktorijela: %f", s);
return 0;
}

II Varijanta