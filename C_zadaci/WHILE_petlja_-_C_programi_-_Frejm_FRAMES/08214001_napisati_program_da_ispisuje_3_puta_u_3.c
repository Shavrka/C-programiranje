/*
 * ZADATAK 08214001 - 08214001
 * Napisati program da ispisuje 3 puta u 3 reda IME sa razmakom.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08214001.htm
 */

#include <stdio.h>

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