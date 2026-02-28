/*
 * ZADATAK 24010610 - 24010610
 * Sa tastature unesu cijeli brojevi n i m, a koji zatim iscrtava na ekranu pravougaonik sastavljen od zvjezdica čije su dužine stranica respektivno n i m. Na primjer, za n = 15 i m = 5, ispis na ekranu treba da izgleda kao
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010610.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n, m;

printf("Dimenzije pravougaonika\n");
printf("Horizontalna duzina: ");
scanf("%d",&n);
printf("Vertikalna duzina: ");;
scanf("%d",&m);

for (i = 0; i < m; i++) { // redovi: i = 0 prvi red,  i = m -1 posljednji red
for (j = 0; j < n; j++) {  // kolone: j = 0 prva kolona, j = n - 1 posljednja kolona
if (i == 0 || i == m - 1 || j == 0 || j == n - 1)  // da li su ivice?
printf("*");     // stranice
else
printf(" ");     // unutrasnjost
}
printf("\n");
}
return 0;
}