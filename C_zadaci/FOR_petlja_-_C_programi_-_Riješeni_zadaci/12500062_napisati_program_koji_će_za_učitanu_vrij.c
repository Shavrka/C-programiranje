/*
 * ZADATAK 304 - 12500062
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost sume faktorijela parnih brojeva do N:S = 2! + 4! + 6! + … + N!
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500062.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, fact;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s=0;
fact=1;

for(i=1; i <= n; i++) {	// ponavljanje za i=1 do i=n - pocetak petlje
fact *= i;			// faktorijel do broja i, fact = fact * i;
if(i % 2 == 0)		// suma faktorijel djeljivih sa 2
s += fact;		// s = s + fact;
}

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

if (n % 2 != 0) 	// samo parni brojevi bez izmjene
n = n - 1;  	// poslednji neparni broj nije ukljucen

for(i=1; i <= n; i+=2) { // prva vrijednost neparna, pa se racunaju dva faktorijela i sabira parni
fact *= i;      // faktorijel do broja i, fact = fact * i;
fact *= (i+1);  // suma faktorijel svakog drugog odnosno parnog
s += fact;      // s = s + fact;
}

printf("Suma je: %f", s);
return 0;
}