/*
 * ZADATAK 10111003 - 10111003
 * Učitati članove niza. Ispisati: pozitivne, nule pa negativne članove niza.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111003.htm
 */

#include <stdio.h>

int main()
{
int n;
int i;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++)
{
scanf("%d", &iNiz[i]);
}

for(i=0;i < n; i++)
{
if (iNiz[i]>0) printf("\n%d", iNiz[i]);

}
for(i=0;i < n; i++)
{
if (iNiz[i]==0) printf("\n%d", iNiz[i]);

}
for(i=0;i < n; i++)
{
if (iNiz[i] < 0) printf("\n%d", iNiz[i]);

}

return 0;
}