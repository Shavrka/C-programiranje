/*
 * ZADATAK 08714021 - 08714021
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714021.htm
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
do {                 // pocetak do-while petlje j
if (j <= i) {    // na i ispod glavne dijagonale
k = i + j -1;  // indesku reda dodaje se indeks kolone umanjen za jedan
printf("%d ", k);
}
j++;
} while (j <= n);         // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);             // sve dok je i <= n ponavljaj
return 0;
}