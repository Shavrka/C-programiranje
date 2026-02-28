/*
 * ZADATAK 10111001 - 10111001
 * Učitiat i ispisati niz /ARRAY/.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111001.htm
 */

#include <stdio.h>

int main()
{
int n;
int i;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];		// rezervisanje prostora za niz cijelih brojeva - ARRAY

printf("Unesi elemente niza: \n");	// ulaz
for(i=0; i < n; i++) {
scanf("%d", &iNiz[i]);
}

printf("Ispis niza: ");				// izlaz
for(i=0; i < n; i++) {
printf("\n%d", iNiz[i]);
}

return 0;
}