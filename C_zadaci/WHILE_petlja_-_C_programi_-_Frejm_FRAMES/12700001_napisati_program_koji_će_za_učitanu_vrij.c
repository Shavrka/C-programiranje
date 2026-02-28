/*
 * ZADATAK 12700001 - 12700001
 * Napisati program koji će za učitanu vrijednost N  izračunati vrijednost izraza i ispisati: S=1/1
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700001.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume

i = 1;                  			// pocetna vrijednost kontrolne varijable
while(i <= n) {	        			// dok je i <= n radi - pocetak petlje
s += i/(double)pow((2*i-1),2); 	// s = s + i/(double)pow((2*i-1),2)
i++;                             // slijedeca vrijednost kontrolne varijable i
}									// kraj while petlje

printf("Suma je: %f", s);
return 0;
}