/*
 * ZADATAK 08614001 - 08614001
 * Napisati program da ispisuje 3 puta u 3 reda IME sa razmakom.
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614001.htm
 */

#include <stdio.h>

int main ()
{
int i, j;

i = 1;                    // pocetna vrijednosti i
while (i <= 3)  {         // dok je i <= 3 ponavljaj - pocetak petlje
j = 1;
while (j <= 3) {      // ispis teksta 3 puta u redu
printf("IME ");   // ispis teksa sa razmakom iza
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}