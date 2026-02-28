/*
 * ZADATAK 08614057 - 08614057
 * Napisati program da ne ispisuje ime u prvom redu. Dva imena u drugom, a zatim u svakom narednom po jedno ime više. Broj redova učitati sa tastature.
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614057.htm
 */

#include <stdio.h>
int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {       // elementi reda
if (j <= i)          // ispod i glavna dijagonala j <= i
printf("IME ");  // ispis
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}

II varijanta
// 08614057
#include <stdio.h>
int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= i) {      // ispis teksta i puta u redu
printf("IME ");   // ispis teksa sa razmakom iza
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}