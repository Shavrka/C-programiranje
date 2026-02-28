/*
 * ZADATAK 08614047 - 08614047
 * Napisati program da ispisuje na glavnoj dijagonali + a osali su -:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614047.htm
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
if (i == j)           // glavna dijagonala?
printf("+");      // na glavnoj dijagonali
else
printf("-");      // izvan glavne dijagonale
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}