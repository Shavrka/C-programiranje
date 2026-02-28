/*
 * ZADATAK 151 - 08702220
 * Ispisati sve trocifrene brojeve kod kojih je cifra jedinica dvosturko veća od cifre desetica, a cifra desetica dvostruko veća od cifre stotica.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702220.htm
 */

#include <stdio.h>

int main()
{
int broj, j, d, s;

printf("Trocifreni brojevi za koje je 4s = 2d = j\n");

for (broj=100; broj < 1000; broj++) {
j = broj % 10;        // jedinice
d = (broj / 10);
d = d % 10;           // desetice
s = broj / 100;       // stotice
if ((4*s == 2*d) && (2*d == j))   // 4*s = 2*d = j?
printf("Trocifren broj: %d \n", broj);
}
return 0;
}

Ispis na ekranu:
Trocifreni brojevi za koje je 4s = 2d = j
Trocifren broj: 124
Trocifren broj: 248