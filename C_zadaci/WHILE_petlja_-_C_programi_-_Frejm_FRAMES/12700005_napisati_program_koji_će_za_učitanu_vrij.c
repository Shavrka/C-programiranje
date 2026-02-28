/*
 * ZADATAK 12700005 - 12700005
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati: S=1+ (1+2)/2!+(1+2+3)/3!+..+(1+2+..+N)/N!;
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700005.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, s1, p;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s1 = 0;  // pocetna vrijednost sume s1
s = 0;   // pocetna vrijednost sume s
p = 1;   // pocetna vrijednost proizvoda

i = 1;                        // pocetna vrijednost kontrolne varijable
while(i <= n) {   	          // pocetak petlje - dok je i <= n radi
s1 = s1 + i; 			  // s1+=i - brojnik u razlomku
p = p * i; 				  // p*=i; - faktorijel do broja i
s = s + s1 / (double) p;  // s+=s1/(double)p;
i++;                      // slijedeca vrijednost kontrolne varijable i
}							  // kraj while petlje

printf("Suma je: %f", s);
return 0;
}