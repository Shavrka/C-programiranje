/*
 * ZADATAK 08214007 - 08214007
 * Napisati program da ispisuje 3 puta u 3 reda IME sa razmakom.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08214007.htm
 */

#include <stdio.h>

int i, j;

int i, j, n;
n = 9;        // broj redova - desetica

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // desetice
j = 0;
while (j <= n) {      // jedinice
printf("%d%d ", i, j);   // ispis dvocifrenog broja
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}