/*
 * ZADATAK 08112063 - 08112063
 * Proizvod parnih od prvih n prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112063.htm
 */

#include <stdio.h>

int main()
{
int i, n, p;              // deklarisanje varijabli

printf("Do broja: ");
scanf("%d",&n);           //  n
p = 1;                    // pocetna vrijednost

for(i=1; i <= n; i++)     // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0) {      // i parno, ostatak dijeljenja sa 2 je nula ?
p *= i;           // kumulativni proizvod p = p * i
printf("Proizvod je: %d\n",p); // ispis vrijednosti
}

return 0;
}

II varijanta   for(;i <= n;i++)
// 08112063
#include <stdio.h>

int main()
{
int i, n, p;          // deklarisanje varijabli

printf("Do broja: ");
scanf("%d",&n);       //  n
p = 1;                // pocetna vrijednost

i = 1;                // pocetna vrijednost i za for petlju
for(;i <= n;i++)      // ponavljanje za i=1 do i=n - pocetak petlje: for(i=1; i <= n; i++)	// for(;i <= n;i++)
if(i % 2 == 0) {  // i parno, ostatak dijeljenja sa 2 je nula ?
p *= i;       // kumulativni proizvod p = p * i
printf("Proizvod je: %d\n",p); // ispis vrijednosti
}

return 0;
}