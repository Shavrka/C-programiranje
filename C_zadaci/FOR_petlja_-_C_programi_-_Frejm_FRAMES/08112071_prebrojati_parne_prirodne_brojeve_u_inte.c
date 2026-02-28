/*
 * ZADATAK 08112071 - 08112071
 * Prebrojati parne prirodne brojeve u intervalu od 1 do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112071.htm
 */

#include <stdio.h>

int main ()
{
printf("Prebroj prirodne brojeve od 1 do n - parni\n"); // naslov
int i, n, br;              // deklarisanje varijabli
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
br = 0;                    // pocetna vrijednost brojaca

for(i=1; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0)         // i parno?
br = br + 1;       // da - i parno, uvecaj brojac brojeva

printf("Prebrojanih ima = %d", br);; // ispis
return 0;
}

II varijanta  br += 1;
// 08112071
#include <stdio.h>

int main ()
{
printf("Prebroj prirodne brojeve od 1 do n - parni\n"); // naslov
int i, n, br;              // deklarisanje varijabli
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
br = 0;                    // pocetna vrijednost brojaca

for(i=1; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0)         // i parno?
br++;              // da, parno uvecaj brojac br = br + 1;

printf("Prebrojanih ima = %d", br);; // ispis
return 0;
}