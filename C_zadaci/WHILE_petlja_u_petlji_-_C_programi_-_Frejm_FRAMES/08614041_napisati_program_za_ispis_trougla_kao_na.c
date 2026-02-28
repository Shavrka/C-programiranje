/*
 * ZADATAK 08614041 - 08614041
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614041.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {      // dok je j <= i ponavljaj - pocetak petlje
if (i + j == n +1)   // sporedna dijagonala?
printf("x");      // sporedna dijagonala
else
printf(".");      // nije na sporedna dijagonali
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}