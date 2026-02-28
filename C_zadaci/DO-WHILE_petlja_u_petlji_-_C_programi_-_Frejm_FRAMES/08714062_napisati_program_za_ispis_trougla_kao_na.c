/*
 * ZADATAK 08714062 - 08714062
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714062.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n;
char znak;
printf("Trougao\n");

printf("Broj redova: ");
scanf("%d",&n);
getchar();

printf("Znak: ");
scanf("%c", &znak);

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {              // pocetak do-while petlje j
if (i + j < n + 1)          // iznad sporedne dijagonale?
printf(" ");            // iznad sporedne dijagonale
if (i + j == n + 1)         // na sporednoj dijagonali?
printf("%c", znak);     // na sporednoj dijq1111agonali
if (i + j > n + 1)          // ispod sporedne dijagonale?
printf(".%c", znak);    // ispod sporedne dijagonale
j++;
} while (j <= n);        // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);            // sve dok je i <= n ponavljaj
return 0;
}