/*
 * ZADATAK 08614048 - 08614048
 * Napisati program da ispisuje + ispod glavne dijagonale a osali su -.
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614048.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {      // dok je j <= i ponavljaj - pocetak petlje
if (i > j)            // ispod glavne dijagonale?
printf("+");      // ispod glavne dijagonale
else
printf("-");      // na i iznad glavne dijagonale
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}