/*
 * ZADATAK 12700056 - 12700056
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati: S=1/2+1/4+1/6+..+1/2n;
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700056.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;    // pocetna vrijednost sume

i = 2;               		// pocetna vrijednost kontrolne varijable
while(i <= 2*n) {			// dok je i <= 2*n ponavljaj - pocetak petlje
s+=1/(double)(i);		// s = s + 1/(double)(i) reciprocna vrijednost parnih
i+=2;     	         	// slijedeca vrijednost kontrolne varijable i
}							// kraj while petlje

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
s = 0;    // pocetna vrijednost sume

i = 1;               			// pocetna vrijednost kontrolne varijable
while(i <= n) {					// dok je i <= n ponavljaj - pocetak petlje
s += 1 / (double) (2 * i); 	// s = s + 1/(2*i), sa 2*i dobijamo dvostruku vrijednost
i++;     	         		// slijedeca vrijednost kontrolne varijable i
}								// kraj while petlje

printf("Suma je: %f", s);
return 0;
}