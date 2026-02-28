/*
 * ZADATAK 08610103 - 08610103
 * Ispisati brojeve kao na slici:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08610103.htm
 */

#include <stdio.h>

int main ()
int i, j;
i = 1;                     // pocetna vrijednosti i
while (i <= 2)  {          // dok je i <= 2 ponavljaj - pocetak petlje
j = 1;                 // pocetna vrijednosti i
while (j <= 3)  {      // dok je i <= 2 ponavljaj - pocetak petlje
printf("i=%d j=%d ", i, j);
j++;               // slijedeca vrijednost j
}                      // kraj While petlje j
printf("\n");;         // novi red, cout << endl;
i++;                   // slijedeca vrijednost i
}                          // kraj While petlje i
return 0;
}