/*
 * ZADATAK 08710104 - 08710104
 * Ispisati brojeve kao na slici:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08710104.htm
 */

#include <stdio.h>

int main()
{
int i, j;

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {                  // pocetak do-while petlje j
printf("i = %d j = %d\n", i, j);   // ispis i j
j++;
} while (j <= 3);     // sve dok je j <= 3 ponavljaj
printf("\n");
i++;
} while (i <= 3);         // sve dok je i <= 3 ponavljaj
return 0;
}