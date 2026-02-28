/*
 * ZADATAK 12900059 - 12900059
 * Napisati program koji će za učitanu vrijednost k izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900059.htm
 */

#include <stdio.h>

int main ()
{
int i, k;
double s;	// vrijednost kvadrata broje se brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Unesi k: ");
scanf("%d", &k);
s = 0; 		// pocetna vrijednost sume

i = 1;          			// pocetna vrijednost kontrolne varijable
do { 			  		// početak petlje - radi
if (i % 2 != 0)		// ako i nije parno izvedi
s += i*i;		// s = s  + i*i; nova vrijednost sume
i++;        		// slijedeca vrijednost kontrolne varijable i
} while(i <= k);			// sve dok je i <= k ponavljaj

printf("Suma iznosi: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>

int main ()
{
int i, k;
double s;	// vrijednost kvadrata broje se brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Unesi k: ");
scanf("%d", &k);
s = 0; 		// pocetna vrijednost sume

i = 1;          		// pocetna vrijednost kontrolne varijable
do {  				// početak petlje - radi
s += i*i;		// s = s  + i*i; nova vrijednost sume
i += 2;     	// slijedeca vrijednost kontrolne varijable i i=i+2
} while(i <= k);		// sve dok je i <= k ponavljaj

printf("Suma iznosi: %f", s);
return 0;
}