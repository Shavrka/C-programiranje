/*
 * ZADATAK 10114005 - 10114005
 * Učitati članove niza. Izračunati i ispisati broj članova niza čiji je indeks djeljiv sa 3.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10114005.htm
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
if (i % 3 == 0) {   // indeks clana niza djeljiv sa 3?
br = br + 1;    // br += 1
}
}
printf("\nnBrojač clanova niza ciji je indeks djeljiv sa 3 = %d", br);

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

for ( i = 0; i < n; i=+3 ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

br = 0;   // pocetna vrijednost brojaca
for ( i = 0; i < n; i+=3 ) // indeks clana niza djeljiv sa 3
{
br = br + 1;    // br += 1
}
printf("\nnBrojač clanova niza ciji je indeks djeljiv sa 3 = %d", br);

return 0;
}