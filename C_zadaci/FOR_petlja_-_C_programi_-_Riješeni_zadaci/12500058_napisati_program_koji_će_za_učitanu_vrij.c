/*
 * ZADATAK 289 - 12500058
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500058.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume

for(i=3; i <= 3*n; i+=3) {	// ponavljanje za i=1 do i=3*n samo svaki treci - pocetak petlje
s+=1/(double)(i*i);	// s = s + 1/(double)(i*i) reciprocna vrijednost kvadrata brojeva djeljivih sa 3
}							// for - kraj petlje

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

for (i = 1; i <= n; i++) {		// ponavljanje za i=1 do i=n - pocetak petlje
s += 1 / (double)(3*3*i*i); 	// s = s + 1/(3*3*i*i), sa 3*i dobijamo trostruku vrijednost
}							    // for - kraj petlje

printf("Suma je: %f", s);
return 0;
}