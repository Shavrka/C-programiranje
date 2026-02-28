/*
 * ZADATAK 08714061 - 08714061
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714061.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;
char znak;

printf("Broj redova: ");
scanf("%d",&n);
getchar();

printf("Znak: ");
scanf("%c", &znak);

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {                 // pocetak do-while petlje j
if (i > j)               // ispod glavne dijagonale?
printf(" ");          // ispod glavne dijagonale prazan prostor
else
printf("%c", znak);   // ispis znaka iznad glavne dijagonale
j++;
} while (j <= n);     // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);         // sve dok je i <= n ponavljaj
return 0;
}