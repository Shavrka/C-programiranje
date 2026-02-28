/*
 * ZADATAK 08614065 - 08614065
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614065.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {      // dok je j <= i ponavljaj - pocetak petlje
if (j >= i)                // iznad glavne dijagonale?
printf("%d ", (j - i + 1));  // indeks kolone umanje za indeks reda + 1 na i iznad glavne dijagonale
else
printf("  ");                // ispod glavne dijagonale prazan prostor
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}