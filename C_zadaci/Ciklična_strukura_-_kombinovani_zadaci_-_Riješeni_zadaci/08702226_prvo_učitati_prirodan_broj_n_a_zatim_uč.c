/*
 * ZADATAK 38 - 08702226
 * Prvo učitati prirodan broj n, a zatim učitati n različitih cijelih brojeva. Sabrati one koji su djeljivi sa 3 ili sa 7.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702226.htm
 */

#include <stdio.h>

int main ()
{
printf("Od n brojeva izracunati sumu onih koji su djeljivih sa 3 ili sa 7\n");
int n, a;
printf("Koliko brojeva: ");
scanf("%d", &n);              // koliko brojeva će se ucitati
int s=0;    // pocetna vrijednost sume

for (int i=1; i<= n; i++) {   // ponavljaj n puta ucitavanje
printf("%d. broj ", i );
scanf("%d", &a);   //     // ucitaj broj
if ((a % 3 == 0) || (a % 7 == 0)) //  djeljivi sa 3 ili sa 7?
s = s + a;             // da, barem jedan djeljiv - uvecaj sumu
}

printf("Suma je %d ", s);
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati sumu onih koji su djeljivih sa 3 ili sa 7
Koliko brojeva: 5
1. broj 3
2. broj 2
3. broj 14
4. broj 4
5. broj 5
Suma je 17