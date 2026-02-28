/*
 * ZADATAK 08714009 - 08714009
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714009.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, k;

printf("Broj redova: ");
scanf("%d",&n);
i = n;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 0;
do {
printf(" ");      // prazan prostor
j++;
} while (j <= 2*n-i);         // sve dok je j <= n ponavljaj
k = i;
do {
printf("x");      // ispis znaka
k--;
} while (k >= 1);
printf("\n");
i--;
} while (i >= 1);             // sve dok je i <= n ponavljaj
return 0;
}