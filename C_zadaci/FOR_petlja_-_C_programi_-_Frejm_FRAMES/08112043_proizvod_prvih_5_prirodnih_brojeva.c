/*
 * ZADATAK 08112043 - 08112043
 * Proizvod prvih 5 prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112043.htm
 */

#include <stdio.h>

int main()
{
printf("Proizvod 1 - 5\n");  // naslov
int i, p;                    // deklarisanje varijabli
p = 1;                       // pocetna vrijednost prizvoda

for(i=1; i <= 5; i++)        // ponavljanje za i=1 do i=5 - pocetak petlje
p = p * i;               // nova vrijednost proizvoda, p = p * i

printf("Proizvod je: %d",p); // ispis

return 0;
}

II varijanta  int i = 1;  p*=i;
// 08112043
#include <stdio.h>

int main()
{
printf("Proizvod 1 - 5\n");  // naslov
int p;                       // deklarisanje varijabli
p = 1;                       // pocetna vrijednost prizvoda

for(int i = 1; i <= 5; i++)  // ponavljanje za i=1 do i=5 - pocetak petlje
p*=i;                    // nova vrijednost proizvoda, p = p*i

printf("Proizvod je: %d",p); // ispis

return 0;
}