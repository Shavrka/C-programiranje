/*
 * ZADATAK 10111010 - 10111010
 * Učitati članove niza. Ispisati članove niza u obrnutom redoslijedu.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111010.htm
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

for(i=n-1; i >=0; i--)
{
printf("\n%d", iNiz[i]);

}

return 0;
}