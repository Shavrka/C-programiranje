/*
 * ZADATAK 154 - 08702223
 * Ispisati sve trocifrene brojeve kod kojih je druga cifra za 2 veća od prve, a treća za 1 veća od druge.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702223.htm
 */

#include <stdio.h>

int main()
{
int broj, j, d, s;

printf("Trocifreni brojevi sa odnosom cifara: d = s+2 ^ j = d+1\n");

for (broj=100; broj<=999; broj++) {
j = broj % 10;        // jedinice
d = (broj / 10);
d = d % 10;           // desetice
s = broj / 100;       // stotice
if ((d == s+2) && (j == d+1))  // d = s+2 ^ j = d+1?
printf("Trocifren broj: %d \n", broj);
}
return 0;
}

Ispis na ekranu:
Trocifreni brojevi sa odnosom cifara: d = s+2 ^ j = d+1
Trocifren broj: 134
Trocifren broj: 245
Trocifren broj: 356
Trocifren broj: 467
Trocifren broj: 578
Trocifren broj: 689