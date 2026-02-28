/*
 * ZADATAK 193 - 08703103
 * Generisati 10 brojeva od 3 do 10 i ispisati ih.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08703103.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, broj;
for (i = 1; i <= 10; i++) {      // ponavljanje za i=1 do i=10 - pocetak petlje
broj = rand() % 8 + 3;   // generisanje slučajnog broja
printf("%d \n", broj);   // ispis slučajnog broja
}
return 0;
}

Ispis na ekranu: