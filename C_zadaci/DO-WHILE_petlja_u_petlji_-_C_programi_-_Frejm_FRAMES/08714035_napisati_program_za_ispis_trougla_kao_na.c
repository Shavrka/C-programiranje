/*
 * ZADATAK 08714035 - 08714035
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714035.htm
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
do {                 // pocetak do-while petlje j
if (j >= i)        // iznad i na glavnoj dijagonali?
printf("x ");  // iznad i na glavnoj dijagonali
else
printf("  ");  // ispod glavne dijagonale
j++;
} while (j <= n);      // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);          // sve dok je i <= n ponavljaj
return 0;
}