/*
 * ZADATAK 10115002 - 10115002
 * Učitati članove niza. Izračunati i ispisati aritmetičku sredinu članova niza sa parnim indeksom.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10115002.htm
 */

#include <stdio.h>

int main()
{
int i, s, br, n;
float as;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

s = 0;    // pocetna vrijednost sume
br = 0;   // pocetna vrijednost brojaca
for ( i = 0; i < n; i++ )
{
if (i % 2 == 0) {   // indeks clana niza paran?
s = s + niz[i];
br = br + 1;
}
}
as = s / br;   // aritmeticka sredina
printf("\nAritmeticka sredina clanova niza sa parnim indeksom = %f", as);

return 0;
}

II Varijanta
#include <stdio.h>
int main()
{
int i, s, br, n;
float as;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

s = 0;    // pocetna vrijednost sume
br = 0;   // pocetna vrijednost brojaca
for ( i = 0; i < n; i+=2 ) // indeks clana niza paran
{
s = s + niz[i];
br = br + 1;
}
as = s / br;   // aritmeticka sredina
printf("\nAritmeticka sredina clanova niza sa parnim indeksom = %f", as);

return 0;
}