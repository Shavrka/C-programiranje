/*
 * ZADATAK 08714007 - 08714007
 * Napisati program za ispis dvocifrenih brojeva kao na slici sa dvije petlje (za svaku cifru odvojena petlja):
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714007.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n;
n = 9;        // broj redova - desetica

i = 1;                // pocetna vrijednosti redan
do {                  // pocetak do-while petlje i
j = 0;            // pocetna vrijednosti kolone
do {              // pocetak do-while petlje j
printf("%d%d ", i, j);   // ispis dvocifrenog broja
j++;
} while (j <= n);        // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);            // sve dok je i <= n ponavljaj
return 0;
}