/*
 * ZADATAK 08214005 - 08214005
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08214005.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (i + j < n + 1) {  // prazan prostor je iznad sporedne dijagonale i + j < n + 1
printf(" ");
j++;
}    // kraj While petlje j
k = 1;
while (k <= i) {
printf("x ");      // ispis znaka
k++;
}          // kraj While petlje k
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}