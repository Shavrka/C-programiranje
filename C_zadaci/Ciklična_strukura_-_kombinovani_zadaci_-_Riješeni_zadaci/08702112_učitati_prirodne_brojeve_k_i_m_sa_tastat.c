/*
 * ZADATAK 27 - 08702112
 * Učitati prirodne brojeve K i M sa tastature. Od broja K ispisati M brojeva koji nisu djeljivi sa 3.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702112.htm
 */

#include <stdio.h>

int main ()
{
int k, m;
printf("Od broja: ");
scanf("%d", &k);
printf("Zeljeni broj m: ");
scanf("%d", &m);
int i, br;
i = k;      // početna vrijednost
br = 0;     // brojač - početna vrijednost

while (br < m) {           // dok nije ispisan željeni broj neparnih broeva ponavljaj - pocetak petlje
if (i % 3 != 0) {      // broj djeljiv sa 3?
printf("%d \n",i); // da, ispis djeljivog sa 3
br = br + 1;       // brojač neparnih uvečaj za 1
}
i++;    // napredovanje kroz petlju
}
return 0;
}

Od broja: 123
Zeljeni broj m: 5