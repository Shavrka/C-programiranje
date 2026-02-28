/*
 * ZADATAK 08714055 - 08714055
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714055.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;
char znak;

printf("Broj redova: ");
scanf("%d",&n);
return 0;

printf("Znak: ");
scanf("%c", &znak);

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {              // pocetak do-while petlje j
if (i <= j)   // iznad glavne dijagonale?
printf("%c", znak);  // ispis znaka iznad glavne dijagonale
else
printf(" ");         // ispis prazanog prostora
j++;
} while (j <= n);        // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);            // sve dok je i <= n ponavljaj
return 0;
}