/*
 * ZADATAK 08614045 - 08614045
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614045.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j;

i = 1;                    // pocetna vrijednosti i
while (i <= 3)  {         // dok je i <= 3 ponavljaj - pocetak petlje
j = 1;
while (j <= 3) {        // elementi reda
if (i+j > 3+1)            // ispod sporedne dijagonale?
printf("IME ");   // ispis teksa sa razmakom iza
else                  // inace, iznad sporedne dijagonale
printf("--- ");   // ispis crtica sa razmakom iza
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}