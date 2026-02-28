/*
 * ZADATAK 08714019 - 08714019
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714019.htm
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
if (j <= i)    // na i ispod glavne dijagonale
printf("%d ", (int)pow(2, j));  // cjelobrojna vrijednost stepena broja
j++;
} while (j <= n);         // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);             // sve dok je i <= n ponavljaj
return 0;
}