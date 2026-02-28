/*
 * ZADATAK 08211041 - 08211041
 * Ispisati parne prirodne brojeve od 1 do 5.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211041.htm
 */

#include <stdio.h>

int main()
{
int i;                       // deklarisanje varjabl
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 5)  {             // dok je i <= 5 ponavljaj - pocetak petlje
if(i % 2 == 0)           // i parno, ostatak dijeljenja sa 2 je nula ?
printf("i = %d\n", i); // da, ispis kontrolne varijable i
i = i + 1;               // slijedeca vrijednost kontrolne varijable i
}

return 0;
}

II varijanta i++;
// 08211041
// Ispis parnih prirodnih brojeva od 1 do 5
#include <stdio.h>

int main()
{
int i;                       // deklarisanje varjabl
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 5)  {             // dok je i <= 5 ponavljaj - pocetak petlje
if(i % 2 == 0)           // i parno, ostatak dijeljenja sa 2 je nula ?
printf("i = %d\n", i); // da, ispis kontrolne varijable i
i++;                     // slijedeca vrijednost kontrolne varijable i, i = i + 1;
}

return 0;
}