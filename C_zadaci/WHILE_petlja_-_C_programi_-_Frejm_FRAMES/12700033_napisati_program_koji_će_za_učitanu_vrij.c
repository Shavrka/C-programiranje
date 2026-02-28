/*
 * ZADATAK 12700033 - 12700033
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700033.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n;
double s, p;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume
p = 1;		// pocetna vrijednost proizvoda

i=1;			//  pocetna vrijednost kontrolne varijable
while(i <= n) {	// dok je i <= n ponavljaj
p *= k*i;   	// p=p*k*i; - nova vrijednost proizvoda
s += p;   	// s=s+p; - nova vrijednost sume
i++;			// slijedeca vrijednost kontrolne varijable i
}				// kraj while petlje

printf("Suma faktorijela: %f", s);
return 0;
}