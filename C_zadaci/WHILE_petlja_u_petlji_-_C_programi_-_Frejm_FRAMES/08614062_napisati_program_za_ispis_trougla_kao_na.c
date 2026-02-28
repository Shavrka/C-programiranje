/*
 * ZADATAK 08614062 - 08614062
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614062.htm
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

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {      // elementi reda
if (i + j < n + 1)          // iznad sporedne dijagonale?
printf(" ");            // iznad sporedne dijagonale
if (i + j == n + 1)         // na sporednoj dijagonali?
printf("%c", znak);     // na sporednoj dijagonali
if (i + j > n + 1)          // ispod sporedne dijagonale?
printf(".%c", znak);    // ispod sporedne dijagonale
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}