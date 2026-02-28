/*
 * ZADATAK 10114002 - 10114002
 * Učitati članove niza. Izračunati i ispisati broj članova niza sa parnim indeksom.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10114002.htm
 */

#include <stdio.h>

int main()
{
int i, br, n;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

br = 0;   // pocetna vrijednost brojaca
for ( i = 0; i < n; i++ )
{
if (i % 2 == 0) {   // indeks clana niza paran?
br = br + 1;    // br += 1
}
}
printf("\nBrojač clanova niza sa parnim indeksom = %d", br);

return 0;
}

II Varijanta
#include <stdio.h>
int main()
{
int i, br, n;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

br = 0;   // pocetna vrijednost brojaca
for ( i = 0; i < n; i+=2 ) // indeks clana niza paran
{
br = br + 1;          // br += 1
}
printf("\nBrojač clanova niza sa parnim indeksom = %d", br);

return 0;
}