/*
 * ZADATAK 106 - 08112062
 * Izračunati proizvod neparnih prirodnih brojeva od 1 do 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112062.htm
 */

#include <stdio.h>
int main ()
{
int i, p;                   // deklarisanje varijabli
p = 1;                      // pocetna vrijednost prizvoda

for(i=1; i <= 5; i++)       // petlja od 1 do 5
if(i % 2 != 0)          // i neparno?
p = p * i;          // da - neparno, nova vrijednost proizvoda

printf("Proizvod je: %d",p);  // ispis

return 0;
}

II varijanta   p *= i;
// 08112062
#include <stdio.h>
int main ()
{
int i, p;                   // deklarisanje varijabli
p = 1;                      // pocetna vrijednost prizvoda

for(i=1; i <= 5; i++)       // petlja od 1 do 5
if(i % 2 != 0)          // i neparno?
p *= i;             // da - neparno, nova vrijednost proizvoda, p = p*i

printf("Proizvod je: %d",p);  // ispis

return 0;
}