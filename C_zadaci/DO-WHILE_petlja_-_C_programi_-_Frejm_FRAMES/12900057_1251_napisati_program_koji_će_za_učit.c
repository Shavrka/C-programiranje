/*
 * ZADATAK 12900057 - 12900057
 * 12.5.1. Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900057.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume

i = 3;               		// pocetna vrijednost kontrolne varijable
do {	 					// pocetak petlje - radi
s+=1/(double)(i);		// s = s + 1/(double)(i) reciprocna vrijednost djeljivih sa 3
i+=3;     	         	// slijedeca vrijednost kontrolne varijable i
} while(i <= 3*n);			// dok je i <= 3*n ponavljaj

printf("Suma je: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume

i = 1;               			// pocetna vrijednost kontrolne varijable
do {							// pocetak petlje - radi
s += 1 / (double) (3 * i); 	// s = s + 1/(3*i), sa 3*i dobijamo trostruku vrijednost
i++;     	         		// slijedeca vrijednost kontrolne varijable i
}  while(i <= n);				// sve dok je i <= n ponavljaj

printf("Suma je: %f", s);
return 0;
}