/*
 * ZADATAK 08614056 - 08614056
 * Napisati program da ispisuje n puta u n redova IME sa razmakom.
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614056.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {      // ispis teksta n puta u redu
printf("IME ");   // ispis teksa sa razmakom iza
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}