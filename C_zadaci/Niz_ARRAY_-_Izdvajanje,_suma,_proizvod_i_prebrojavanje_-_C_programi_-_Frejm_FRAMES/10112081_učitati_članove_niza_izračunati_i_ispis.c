/*
 * ZADATAK 10112081 - 10112081
 * Učitati članove niza. Izračunati i ispisati proizvod članova niza čiji je indeks djeljiv sa 3.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112081.htm
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
for ( i = 0; i < n; i+=3 )//daje brojeve djeljive sa 3
{
//2. varijanta
//if (i % 3==0){
p = p * niz[i];
}
printf("\nProizvod clanova niza = %d", p);

return 0;
}