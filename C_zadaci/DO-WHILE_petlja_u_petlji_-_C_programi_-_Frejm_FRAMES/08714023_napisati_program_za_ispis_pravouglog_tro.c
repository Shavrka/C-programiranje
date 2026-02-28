/*
 * ZADATAK 08714023 - 08714023
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714023.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, k;

printf("Broj redova: ");
scanf("%d",&n);

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {                     // pocetak do-while petlje j
if (j <= i)  {        // ispod i glavna dijagonala j <= i
k = 5 * (i + j -1);  // indesku reda dodaje se indeks kolone umanjen za jedan * 5
printf("%d ", k);
}
j++;
} while (j <= n);        // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);         // sve dok je i <= n ponavljaj
return 0;
}