/*
 * ZADATAK 08214002 - 08214002
 * Napisati program da ispisuje u prvo redu jedno ime a zatim u svakom narednom po jedno ime više.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08214002.htm
 */

#include <stdio.h>

int main()
{
#include
int main()
{
int i, j;

i = 1;                    // pocetna vrijednosti i
while (i <= 3)  {         // dok je i <= 3 ponavljaj - pocetak petlje
j = 1;
while (j <= 3) {      // elementi reda
if (j <= i)       // ispod i glavna dijagonala j <= i
printf("IME ");   // ispis teksa sa razmakom iza
j++;
}    // kraj While petlje j
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}

II varijanta
// 08214002
#include <stdio.h>

int main()
{
int i, j;

i = 1;                    // pocetna vrijednosti i
while (i <= 3)  {         // dok je i <= 3 ponavljaj - pocetak petlje
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