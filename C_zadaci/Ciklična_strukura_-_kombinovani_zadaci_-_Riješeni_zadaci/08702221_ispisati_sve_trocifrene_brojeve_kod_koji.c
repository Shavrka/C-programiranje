/*
 * ZADATAK 152 - 08702221
 * Ispisati sve trocifrene brojeve kod kojih je cifra stotica dvosturko veća od cifre desetica, a cifra destica dvostruko veća od cifre jedinica.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702221.htm
 */

#include <stdio.h>

int main()
{
int broj, j, d, s;        // deklarisanje varijable

printf("Trocifreni brojevi sa odnosom cifara: s = 2d = 4j\n");

for (broj=100; broj < 1000; broj++) {
j = broj % 10;        // jedinice
d = (broj / 10);
d = d % 10;           // desetice
s = broj / 100;       // stotice
if ((s== 2*d) &&(2*d == 4*j))  // s = 2*d = 4*j?
printf("Trocifren broj: %d \n", broj);
}
return 0;
}

Ispis na ekranu:
Trocifreni brojevi sa odnosom cifara: s = 2d = 4j
Trocifren broj: 421
Trocifren broj: 842