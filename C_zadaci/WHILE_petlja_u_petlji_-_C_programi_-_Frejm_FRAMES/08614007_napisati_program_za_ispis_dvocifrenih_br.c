/*
 * ZADATAK 08614007 - 08614007
 * Napisati program za ispis dvocifrenih brojeva kao na slici sa dvije petlje (za svaku cifru odvojena petlja):
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614007.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n;
n = 9;        // broj redova - desetica

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // desetice
j = 0;
while (j <= n) {      // jedinice
printf("%d%d ", i, j);   // ispis dvocifrenog broja
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}