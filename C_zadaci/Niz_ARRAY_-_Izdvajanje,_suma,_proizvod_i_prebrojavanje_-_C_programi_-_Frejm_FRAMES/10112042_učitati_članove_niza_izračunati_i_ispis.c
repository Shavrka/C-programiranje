/*
 * ZADATAK 10112042 - 10112042
 * Učitati članove niza. Izračunati i ispisati sumu članova niza sa parnim indeksom.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112042.htm
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
if (i % 2 == 0) {   // indeks clana niza paran?
s = s + niz[i];
}
}
printf("\nSuma clanova niza sa parnim indeksom = %d", s);

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

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

s = 0;    // pocetna vrijednsot sume
for ( i = 0; i < n; i+=2 ) // indeks clana niza paran
{
s = s + niz[i];
}
printf("\nSuma clanova niza sa parnim indeksom = %d", s);

return 0;
}