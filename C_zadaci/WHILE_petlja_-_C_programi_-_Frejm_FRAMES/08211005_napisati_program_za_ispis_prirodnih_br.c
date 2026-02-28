/*
 * ZADATAK 08211005 - 08211005
 * Napisati program za   ispis prirodnih brojeva od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211005.htm
 */

#include <stdio.h>

int main()
{
int i;                       // deklarisanje varjabl
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 5)  {             // dok je i <= 5 ponavljaj - pocetak petlje
printf("i = %d\n", i);   // ispis kontrolne varijable i
i = i + 1;               // slijedeca vrijednost kontrolne varijable i
}

return 0;
}

II varijanta i++;
// 08211005
// Ispis prirodnih brojeva od 1 do 5
#include <stdio.h>

int main()
{
int i;                       // deklarisanje varjabl
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 5)  {             // dok je i <= 5 ponavljaj - pocetak petlje
printf("i = %d\n", i);   // ispis kontrolne varijable i
i++;                     // slijedeca vrijednost kontrolne varijable i, i = i + 1;
}

return 0;
}