/*
 * ZADATAK 08614010 - 08614010
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614010.htm
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
printf(" ");      // ispis prazanog prostora
else
printf("x ");      // ispis znaka iznad glavne dijagonale
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}

II Varijanta
// 08614010
# include <stdio.h>

int main ()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j < i) {       // ispod glavne dijagonale (prazan prostor)
printf(" ");      // prazan prostor
j++;
}    // kraj While petlje j
k = 0;
while (k <= n - i) {
printf("x ");      // ispis znaka
k++;
}          // kraj While petlje k
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}