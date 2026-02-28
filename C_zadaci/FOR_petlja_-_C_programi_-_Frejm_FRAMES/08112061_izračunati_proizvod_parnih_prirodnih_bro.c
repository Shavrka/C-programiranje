/*
 * ZADATAK 08112061 - 08112061
 * Izračunati proizvod parnih prirodnih brojeva od 1 do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112061.htm
 */

#include <stdio.h>

int main()
{
printf("Proizvod 1 - 5 - parni\n");  // naslov
int i, p;                    // deklarisanje varjabli
p = 1;                       // pocetna vrijednosti kumulativne proizvoda
for (i=1; i <= 5; i++)       // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 2 == 0)           // i parno ?
p = p * i;           // da, pomnozi p sa vrijednoscu i; p=p*i

printf("Proizvod = %d",p);   // ispis proizvoda
return 0;
}

II varijanta  p*=i;
// 08112061
#include <stdio.h>

int main()
{
printf("Proizvod 1 - 5 - parni\n");  // naslov
int i, p;                    // deklarisanje varjabli
p = 1;                       // pocetna vrijednosti kumulativne proizvoda
for (i=1; i <= 5; i++)       // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 2 == 0)           // i parno ?
p*=i;                // da, pomnozi p sa vrijednoscu i; p=p*i

printf("Proizvod = %d",p);   // ispis proizvoda
return 0;
}