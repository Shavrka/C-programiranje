/*
 * ZADATAK 08212061 - 08212061
 * Izračunati proizvod parnih prirodnih brojeva od 1 do 5.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212061.htm
 */

#include <stdio.h>

int main()
{
int i, p;                    // deklarisanje varjabl
p = 1;                       // pocetna vrijednosti kumulativne proizvoda
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 5)  {             // dok je i <= 5 ponavljaj - pocetak petlje
if(i % 2 == 0)           // i parno ?
p = p * i;           // da, pomnozi p sa vrijednoscu i; p=p*i
i++;                     // slijedeca vrijednost kontrolne varijable i, i = i + 1;
}

printf("Proizvod je: %d",p); // ispis proizvoda
return 0;
}

II varijanta p*=i;
// 08212061
#include <stdio.h>

int main()
{
int i, p;                    // deklarisanje varjabl
p = 1;                       // pocetna vrijednosti kumulativne proizvoda
i = 1;                       // pocetna vrijednost kontrolne varijable
while(i <= 5)  {             // dok je i <= 5 ponavljaj - pocetak petlje
if(i % 2 == 0)           // i parno ?
p*=i;                // da, pomnozi p sa vrijednoscu i; p=p*i
i++;                     // slijedeca vrijednost kontrolne varijable i, i = i + 1;
}

printf("Proizvod je: %d",p); // ispis proizvoda
return 0;
}