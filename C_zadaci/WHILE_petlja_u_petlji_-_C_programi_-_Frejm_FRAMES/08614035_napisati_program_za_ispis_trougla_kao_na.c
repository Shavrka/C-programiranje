/*
 * ZADATAK 08614035 - 08614035
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614035.htm
 */

#include <stdio.h>

int main()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = n - 1;
while (j >= n - i + 1) {       // dok je j <= i (ispod glavne dijagonale) ponavljaj - pocetak petlje
printf("  ");      // ispis prazanog prostora
j--;
}    // kraj While petlje j
k = n;
while (k >= i) {
printf("x ");      // ispis znaka
k--;
}          // kraj While petlje k
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}