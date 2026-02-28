/*
 * ZADATAK 12900037 - 12900037
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900037.htm
 */

#include <stdio.h>
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
do {						// pocetak petlje - radi
p=p*i;					//  nova vrijednost proizvoda
if (i % 2 == 0){		// ako je i parno - djeljivo sa 2 izvedi
kfakt = kfakt * k;	// nova vrijednost faktorijela
s = s + kfakt * p;	// nova vrijednost sume
}
i++;					// slijedeca vrijednost kontrolne varijable i
} while(i <= 2*n);			// sve dok je i manje od 2*n ponavljaj petlju

printf("Suma faktorijela: %f", s);
return 0;
}