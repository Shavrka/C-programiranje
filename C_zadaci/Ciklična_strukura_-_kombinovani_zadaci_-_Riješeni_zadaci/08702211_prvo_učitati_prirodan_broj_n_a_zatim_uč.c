/*
 * ZADATAK 37 - 08702211
 * Prvo učitati prirodan broj n, a zatim učitati n cijelih brojeva te izračunati sumu brojeva djeljivih sa 3 ili sa 5.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702211.htm
 */

#include <stdio.h>

int main ()
{
printf("Od n brojeva izracunati sumu onih koji su djeljivih sa 3 ili sa 5\n");
int n, a;
printf("Koliko brojeva : ");
scanf("%d", &n);              // koliko brojeva će se ucitati
int s=0;    // pocetna vrijednost sume

for (int i=1; i<= n; i++) {   // ponavljaj n puta ucitavanje
printf("%d. broj ", i );
scanf("%d", &a);   //     // ucitaj broj
if ((a % 3 == 0) || (a % 5 == 0)) //  djeljivi sa 3 ili sa 5?
s = s + a;            // da, barem jedan djeljiv - uvecaj sumu
}

printf("Suma je %d ", s);
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati sumu onih koji su djeljivi sa 3 ili djeljivi sa 5
Koliko brojeva 5
1. broj 3
2. broj 5
3. broj 15
4. broj 2
5. broj 4
Suma je 23