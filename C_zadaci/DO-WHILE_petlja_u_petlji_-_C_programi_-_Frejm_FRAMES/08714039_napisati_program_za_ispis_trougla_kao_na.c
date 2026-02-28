/*
 * ZADATAK 08714039 - 08714039
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714039.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);
i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {              // pocetak do-while petlje j
if (i + j == n +1)   // sporedna dijagonala?
printf("x");     // sporedna dijagonala
else
printf(" ");     // nije na sporedna dijagonali
j++;
} while (j <= n);        // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);            // sve dok je i <= n ponavljaj
return 0;
}