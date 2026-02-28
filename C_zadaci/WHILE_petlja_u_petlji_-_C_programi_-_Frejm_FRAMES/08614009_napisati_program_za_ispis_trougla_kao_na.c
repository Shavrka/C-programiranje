/*
 * ZADATAK 08614009 - 08614009
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614009.htm
 */

#include <stdio.h>

int main()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

i = n;                    // pocetna vrijednosti i
while (i >= 1)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 0;
while (j < 2*n-i) {   // ispis je pomjeren za n karaktera lijevo
printf(" ");      // prazan prostor
j++;
}    // kraj While petlje j
k = i;
while (k >= 1) {
printf("x");      // ispis znaka
k--;
}          // kraj While petlje k
printf("\n");
i--;
}   // kraj While petlje i
return 0;
}