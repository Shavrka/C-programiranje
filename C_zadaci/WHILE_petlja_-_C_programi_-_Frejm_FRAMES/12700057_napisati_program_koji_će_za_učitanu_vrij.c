/*
 * ZADATAK 12700057 - 12700057
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati: S=1/3+1/6+1/9+..+1/3n;
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700057.htm
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
while(i <= 3*n) {	 		// dok je i <= 3*n ponavljaj - pocetak petlje
s+=1/(double)(i);		// s = s + 1/(double)(i) reciprocna vrijednost djeljivih sa 3
i+=3;     	         	// slijedeca vrijednost kontrolne varijable i
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
s = 0;		// pocetna vrijednost sume

i = 1;               			// pocetna vrijednost kontrolne varijable
while(i <= n) {					// dok je i <= n ponavljaj - pocetak petlje
s += 1 / (double) (3 * i); 	// s = s + 1/(3*i), sa 3*i dobijamo trostruku vrijednost
i++;     	         		// slijedeca vrijednost kontrolne varijable i
}								// kraj while petlje

printf("Suma je: %f", s);
return 0;
}