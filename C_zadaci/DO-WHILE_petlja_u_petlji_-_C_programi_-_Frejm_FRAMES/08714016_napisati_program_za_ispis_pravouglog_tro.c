/*
 * ZADATAK 08714016 - 08714016
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714016.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);
i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {              // pocetak do-while petlje j
if (j == 1)    // prvi znak u redu
printf("x ");     // ispis prvog znaka
else
printf("3 x ");   // ispis ostalih znakova u redu
j++;
} while (j <= i);         // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);             // sve dok je i <= n ponavljaj
return 0;
}