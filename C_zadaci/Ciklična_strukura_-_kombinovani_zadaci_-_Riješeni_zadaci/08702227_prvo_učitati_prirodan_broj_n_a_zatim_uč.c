/*
 * ZADATAK 41 - 08702227
 * Prvo učitati prirodan broj n, a zatim učitati n cijelih brojeva te izračunati sumu brojeva koji su parni ili završavaju na 5.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702227.htm
 */

#include <stdio.h>

int main ()
{
printf("Od n brojeva izracunati sumu onih koji paran ili završavaju na 5\n");
int n, a;
printf("Koliko brojeva: ");
scanf("%d", &n);              // koliko brojeva će se ucitati
int s=0;    // pocetna vrijednost sume

for (int i=1; i<= n; i++) {   // ponavljaj n puta ucitavanje
printf("%d. broj ", i );
scanf("%d", &a);   //     // ucitaj broj
if ((a % 2 == 0) || (a % 10 == 5)) //  paran ili završavaju na 5?
s = s + a;             // da, barem jedan djeljiv - uvecaj sumu
}

printf("Suma je %d ", s);
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati sumu onih koji paran ili završavaju na 5
Koliko brojeva : 5
1. broj 2
2. broj 15
3. broj 3
4. broj 9
5. broj 4
Suma je 21