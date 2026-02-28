/*
 * ZADATAK 08714038 - 08714038
 * Napisati program da ispisuje na glavnoj dijagonali + a osali su -:
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714038.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);
i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {              // pocetak do-while petlje j
if (i == j)           // glavna dijagonala?
printf("x");      // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
j++;
} while (j <= n);         // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);             // sve dok je i <= n ponavljaj
return 0;
}