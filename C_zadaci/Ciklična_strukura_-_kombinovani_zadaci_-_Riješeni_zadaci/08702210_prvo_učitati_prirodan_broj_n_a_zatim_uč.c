/*
 * ZADATAK 39 - 08702210
 * Prvo učitati prirodan broj n, a zatim učitati n cijelih brojeva te izračunati sumu brojeva koji su parni ili se završavaju na 3.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702210.htm
 */

#include <stdio.h>

int main ()
{
printf("Od n brojeva izracunati sumu onih koji su parni ili se zavrsavaju na 3\n");
int n, a;
printf("Koliko brojeva : ");
scanf("%d", &n);              // koliko brojeva će se ucitati
int s=0;    // pocetna vrijednost sume

for (int i=1; i<= n; i++) {   // ponavljaj n puta ucitavanje
printf("%d. broj ", i );
scanf("%d", &a);   //     // ucitaj broj
if ((a % 2 == 0) || (a % 10 == 3))  // ucitani broj paran ili se završavaju na 3?
s = s + a;             // uvecaj sumu
}

printf("Suma je %d ", s);
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati sumu onih koji su parni ili se završavaju na 3
Koliko brojeva 5
1. broj 23
2. broj 2
3. broj 4
4. broj 1
5. broj 5
Suma je 29