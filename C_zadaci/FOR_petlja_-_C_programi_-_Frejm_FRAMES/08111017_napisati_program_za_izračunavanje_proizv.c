/*
 * ZADATAK 08111017 - 08111017
 * Napisati program za izračunavanje proizvoda od 1 do 10.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111017.htm
 */

#include <stdio.h>

int main()
{
printf("Proizvod 1 - 5\n");  // naslov
int i, p;                 // deklarisanje varijabli
p = 1;                    // pocetna vrijednost prizvoda

for(i=1; i <= 10; i++)    // ponavljanje za i=1 do i=10 - pocetak petlje
p = p * i;            // pomnozi p sa vrijednoscu i

printf("Proizvod je: %d",p);  // ispis

return 0;
}

II varijanta    p*=i;
// 08111017
#include <stdio.h>

int main()
{
printf("Proizvod 1 - 5\n");  // naslov
int i, p;                 // deklarisanje varijabli
p = 1;                    // pocetna vrijednost prizvoda

for(i=1; i <= 10; i++)    // ponavljanje za i=1 do i=10 - pocetak petlje
p*=i;                 // nova vrijednost proizvoda, p = p*i

printf("Proizvod je: %d",p);  // ispis

return 0;
}