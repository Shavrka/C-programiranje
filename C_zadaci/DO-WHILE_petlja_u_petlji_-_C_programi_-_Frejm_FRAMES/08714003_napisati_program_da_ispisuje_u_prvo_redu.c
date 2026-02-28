/*
 * ZADATAK 08714003 - 08714003
 * Napisati program da ispisuje u prvo redu crtice umjesto imena i na kraju ispisuju ime a zatim u svakom narednom po jedno ime više.
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714003.htm
 */

#include <stdio.h>

int main()
{
int i, j;

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {              // pocetak do-while petlje j
if (i + j >= 3 + 1)       // ispod sporedne dijagonale?
printf("IME ");   // ispis teksa sa razmakom iza
else                  // inace, iznad sporedne dijagonale
printf("--- ");   // ispis crtica sa razmakom iza

j++;
} while (j <= 3);        // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= 3);            // sve dok je i <= n ponavljaj
return 0;
}