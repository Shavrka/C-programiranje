/*
 * ZADATAK 08714049 - 08714049
 * Napisati program da ispisuje + ispod glavne dijagonale a osali su -.
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714049.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {                 // pocetak do-while petlje j
if (j > i)         // iznad glavne dijagonale?
printf("+");   // iznad glavne dijagonale
else
printf("-");   // ispod i na glavnoj dijagonali
j++;
} while (j <= n);      // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);          // sve dok je i <= n ponavljaj
return 0;
}