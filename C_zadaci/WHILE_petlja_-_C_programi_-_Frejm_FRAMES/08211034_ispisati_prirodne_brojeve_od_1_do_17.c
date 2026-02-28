/*
 * ZADATAK 08211034 - 08211034
 * Ispisati prirodne brojeve od 1 do 17.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211034.htm
 */

#include <stdio.h>

int main()
{
int i;                       // deklarisanje varjabl
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 17)  {            // dok je i <= 17 ponavljaj - pocetak petlje
printf("i = %d\n", i);   // ispis kontrolne varijable i
i = i + 1;               // slijedeca vrijednost kontrolne varijable i
}

return 0;
}

II varijanta i++;
// 08211034
// Ispis prirodnih brojeva od 1 do 17
#include <stdio.h>

int main()
{
int i;                       // deklarisanje varjabl
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 17)  {            // dok je i <= 17 ponavljaj - pocetak petlje
printf("i = %d\n", i);   // ispis kontrolne varijable i
i++;                     // slijedeca vrijednost kontrolne varijable i, i = i + 1;
}

return 0;
}