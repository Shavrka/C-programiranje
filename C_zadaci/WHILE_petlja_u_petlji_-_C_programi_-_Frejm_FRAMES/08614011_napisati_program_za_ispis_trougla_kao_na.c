/*
 * ZADATAK 08614011 - 08614011
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614011.htm
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
while (i + j < n + 1) {  // iznad sporedne dijagonale (i + j < n + 1)
printf(" ");         // prazan prostor
j++;
}    // kraj While petlje j
k = 1;
while (k <= (2*i - 1)) {  // broj ispisa dvostruki broj reda umanjen za 1
printf("x");          // ispis znaka
k++;
}          // kraj While petlje k
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}