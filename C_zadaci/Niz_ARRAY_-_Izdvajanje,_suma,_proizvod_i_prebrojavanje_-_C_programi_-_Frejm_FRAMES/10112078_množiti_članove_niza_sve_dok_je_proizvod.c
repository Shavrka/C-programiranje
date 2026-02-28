/*
 * ZADATAK 10112078 - 10112078
 * Množiti članove niza sve dok je proizvod manja od 541.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112078.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Mnoziti clanove niza sve dok je proizvod manji od 541\n");  // naslov
int i,k, p=1, n;
printf("koliko niz ima clanova:");
scanf ("%d",&n);   // broj clanova
int a[n];

for ( i = 0; i < n; i++ )  {   // ucitavanje clanova niza
printf("%d. --> ", i);
scanf ("%d",&k);
a[i] = k;
}

i=0;
while(p * a[i] < 541 && i < n){    // dok je proizvod * slijedeci clan < 541 i ima jos clanova ponavljaj
p *= a[i];                     // uvecaj proizvod
i++;
}

printf("Proizvod = %d prvih %d clanova", p, i );

return 0;
}