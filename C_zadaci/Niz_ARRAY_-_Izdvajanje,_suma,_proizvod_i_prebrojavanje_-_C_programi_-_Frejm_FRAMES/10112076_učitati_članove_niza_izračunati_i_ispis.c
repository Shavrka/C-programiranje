/*
 * ZADATAK 10112076 - 10112076
 * Učitati članove niza. Izračunati i ispisati proizvod članova niza koji su djeljivi sa 2 (paran).
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112076.htm
 */

#include <stdio.h>

int main()
{
int i,proizvod=1,n;

printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++) {
scanf("%d", &iNiz[i]);
}

for (i = 0; i < 10; ++i ) {
if (iNiz[i] % 2 == 0){   // clan niza paran?
proizvod*=iNiz[i];
}
}
printf("%d\n",proizvod);

return 0;
}