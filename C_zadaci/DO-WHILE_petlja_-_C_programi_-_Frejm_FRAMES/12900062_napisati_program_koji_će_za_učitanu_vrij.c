/*
 * ZADATAK 12900062 - 12900062
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost sume faktorijela parnih brojeva do N:S = 2! + 4! + 6! + … + N!
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900062.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, fact;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;      // pocetna vrijednost sume
fact = 1;   // pocetna vrijednost proizvoda

i = 1;                  // pocetna vrijednost kontrolne varijable
do {	         		// početak petlje - radi
fact *= i;			// faktorijel do broja i, fact = fact * i;
if(i % 2 == 0)		// suma faktorijel djeljivih sa 2
s += fact;		// s = s + fact;
i++;                // slijedeca vrijednost kontrolne varijable i
} while(i <= n);		// sve dok je i <= n ponavljaj

printf("Suma je: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>
int main ()
{
int i, n;
double s, fact;       // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s=0;
fact=1;

i = 1;              // pocetna vrijednost kontrolne varijable
if (n % 2 != 0) 	// samo parni brojevi bez izmjene
n = n - 1;  	// poslednji neparni broj nije ukljucen
do {	     		// početak petlje - radi
fact *= i;      // faktorijel do broja i, fact = fact * i;
fact *= (i+1);  // suma faktorijel svakog drugog odnosno parnog
s += fact;      // s = s + fact;
i += 2;         // slijedeca vrijednost kontrolne varijable i
} while(i <= n);    // sve dok je i <= n ponavljaj

printf("Suma je: %f", s);
return 0;
}