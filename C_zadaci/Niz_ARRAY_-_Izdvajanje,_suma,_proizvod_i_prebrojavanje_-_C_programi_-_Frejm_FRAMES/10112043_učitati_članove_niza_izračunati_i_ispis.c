/*
 * ZADATAK 10112043 - 10112043
 * Učitati članove niza. Izračunati i ispisati sumu članova niza čiji je indeks djeljiv sa 3.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112043.htm
 */

#include <stdio.h>

int main()
{

int i, s, n;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

s = 0;    // pocetna vrijednsot sume
for ( i = 0; i < n; i++ )
{
if (i % 3 == 0) {   // indeks clana niza djeljiv sa 3?
s = s + niz[i];
}
}
printf("\nSuma clanova niza ciji je indeks djeljiv sa 3 = %d", s);

return 0;
}

II Varijanta
#include <stdio.h>
int main()
{

int i, s, n;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i=+3 ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

s = 0;    // pocetna vrijednsot sume
for ( i = 0; i < n; i+=3 ) // indeks clana niza djeljiv sa 3
{
s = s + niz[i];
}
printf("\nSuma clanova niza ciji je indeks djeljiv sa 3 = %d", s);

return 0;
}