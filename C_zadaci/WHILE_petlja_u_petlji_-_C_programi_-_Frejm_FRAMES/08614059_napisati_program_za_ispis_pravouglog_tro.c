/*
 * ZADATAK 08614059 - 08614059
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614059.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n;
char znak;

printf("Broj redova: ");
scanf("%d",&n);
getchar();

printf("Znak: ");
scanf("%c", &znak);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= i) {      // dok je j <= i ponavljaj - pocetak petlje
if (i == j)                 // glavna dijagonala?
printf("%c", znak);    // na glavnoj dijagonali
else
printf(".");            // ispod glavne dijagonale
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}