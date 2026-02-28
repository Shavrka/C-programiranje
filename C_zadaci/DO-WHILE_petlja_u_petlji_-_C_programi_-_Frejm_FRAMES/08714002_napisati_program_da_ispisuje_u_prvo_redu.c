/*
 * ZADATAK 08714002 - 08714002
 * Napisati program da ispisuje u prvo redu jedno ime a zatim u svakom narednom po jedno ime više.
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714002.htm
 */

#include <stdio.h>

int main()
{
int i, j;

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {                     // pocetak do-while petlje j
if (j <= i)          // ispod i glavna dijagonala j <= i
printf("IME ");  // ispis teksa sa razmakom iza

j++;
} while (j <= 3);        // sve dok je j <= 3 ponavljaj
printf("\n");
i++;
} while (i <= 3);         // sve dok je i <= 3 ponavljaj
return 0;
}