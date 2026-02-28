/*
 * ZADATAK 12900035 - 12900035
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900035.htm
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

i = 1;				// pocetna vrijednost kontrolne varijable
do {				// pocetak petlje - radi
p *= i;  	 	// p=p*i; nova vrijednost proizvoda
if (i % 2 == 0)	// ako je i parno - djeljivo sa 2 izvedi
s += k * p;  // s=s+k*p; - nova vrijednost sume
i++;				// slijedeca vrijednost kontrolne varijable i
} while(i <= 2*n); 	// sve dok je i manje od 2*n ponavljaj petlju

printf("Suma: %f", s);
return 0;
}