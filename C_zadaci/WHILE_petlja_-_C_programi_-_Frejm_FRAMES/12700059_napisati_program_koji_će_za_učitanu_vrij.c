/*
 * ZADATAK 12700059 - 12700059
 * Napisati program koji će za učitanu vrijednost k izračunati vrijednost izraza i ispisati: S= 1
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700059.htm
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
while(i <= k) { 			// pocetak petlje - dok je i <= k radi
if (i % 2 != 0)		// ako i nije parno izvedi
s += i*i;		// s = s  + i*i; nova vrijednost sume
i++;        		// slijedeca vrijednost kontrolne varijable i
}						// kraj while petlje

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

i = 1;           // pocetna vrijednost kontrolne varijable
while(i <= k) {  // pocetak petlje - dok je i <= k radi
s += i*i;	// s = s  + i*i; nova vrijednost sume
i += 2;     // slijedeca vrijednost kontrolne varijable i i=i+2
}				// kraj while petlje

printf("Suma iznosi: %f", s);
return 0;
}