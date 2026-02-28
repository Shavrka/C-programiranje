/*
 * ZADATAK 10112053 - 10112053
 * Izračunati i ispisati sumu članova niza čiji indeks nije djeljiv sa 3.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112053.htm
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
if (i % 3 != 0) {   // indeks clana niza nije djeljivim sa 3?
s = s + niz[i];
}
}
printf("\nSuma clanova niza sa indeksom koji nije djeljivim sa 3 = %d", s);

return 0;
}

Ispis na ekranu:
Unesi broj elemenata niza:

Suma clanova niza sa indeksom koji nije djeljivim sa 3 = 30