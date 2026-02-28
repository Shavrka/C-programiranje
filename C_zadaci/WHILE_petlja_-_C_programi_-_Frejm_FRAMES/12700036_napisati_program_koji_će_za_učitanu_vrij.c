/*
 * ZADATAK 12700036 - 12700036
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati::
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700036.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n;
double s, p, kfakt;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
kfakt = 1;  // pocetna vrijednost faktorijela
s = 0;		// pocetna vrijednost sume
p = 1;		// pocetna vrijednost proizvoda

i = 1;						// pocetna vrijednost kontrolne varijable
while(i <= 3*n) {			// dok je i <= 3*n ponavljaj
p=p*i;					//  nova vrijednost proizvoda
if (i % 3 == 0){		// ako je i djeljivo sa 3 izvedi
kfakt = kfakt * k;	// nova vrijednost faktorijela
s = s + kfakt * p;	// nova vrijednost sume
}
i++;					// slijedeca vrijednost kontrolne varijable i
}							// kraj while petlje

printf("Suma faktorijela: %f", s);
return 0;
}