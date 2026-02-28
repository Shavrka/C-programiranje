/*
 * ZADATAK 08214003 - 08214003
 * Napisati program da ispisuje u prvo redu crtice umjesto imena i na kraju ispisuju ime a zatim u svakom narednom po jedno ime više.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08214003.htm
 */

#include <stdio.h>

int main()
{
int i, j;

i = 1;                    // pocetna vrijednosti i
while (i <= 3)  {         // dok je i <= 3 ponavljaj - pocetak petlje
j = 1;
while (j <= 3) {        // elementi reda
if (i + j >= 3 + 1)       // ispod sporedne dijagonale?
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

II varijanta
// 08214003
#include <stdio.h>

int main()
{
int i, j, k;

i = 1;                    // pocetna vrijednosti i
while (i <= 3)  {         // dok je i <= 3 ponavljaj - pocetak petlje
j = 1;
while (j <= (3 - i)) {    // ispis crtica umjesto teksta u redu
printf("--- ");       // ispis crtica sa razmakom iza
j++;
}    // kraj While petlje j
k = 1;
while (k <= i) {    // ispis teksta 3 puta u redu
printf("IME ");   // ispis teksa sa razmakom iza
k++;
}
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}