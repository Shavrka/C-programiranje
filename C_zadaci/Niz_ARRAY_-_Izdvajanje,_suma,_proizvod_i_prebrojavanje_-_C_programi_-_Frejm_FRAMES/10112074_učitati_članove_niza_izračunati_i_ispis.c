/*
 * ZADATAK 10112074 - 10112074
 * Učitati članove niza. Izračunati i ispisati proizvod članova niza sa neparnim indeksom.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112074.htm
 */

#include <stdio.h>

int main()
{

int i, p, n;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

p = 1;    // pocetna vrijednsot proizvoda
for ( i = 1; i < n; i+=2 )
{
p = p * niz[i];
}
printf("\nProizvod clanova niza = %d", p);

return 0;
}