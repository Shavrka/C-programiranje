/*
 * ZADATAK 08714057 - 08714057
 * Napisati program da ne ispisuje ime u prvom redu. Dva imena u drugom, a zatim u svakom narednom po jedno ime više. Broj redova učitati sa tastature.
 * Kategorija: DO-WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08714057.htm
 */

#include <stdio.h>
int main()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);

i = 1;                // pocetna vrijednosti i
do {                  // pocetak do-while petlje i
j = 1;
do {                     // pocetak do-while petlje j
if (j <= i)          // ispod i glavna dijagonala j <= i
printf("IME ");  // ispis

j++;
} while (j <= n);        // sve dok je j <= n ponavljaj
printf("\n");
i++;
} while (i <= n);         // sve dok je i <= n ponavljaj
return 0;
}