/*
 * ZADATAK 10511038 - 10511038
 * Učitati niz X od n članova. Naći maksimum poređenjem nultog člana niza.
 * Kategorija: Niz /ARRAY/ - Maksimum, minimum - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/105c/10511038.htm
 */

#include <stdio.h>
// P10511038

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

printf("Ispis niza: ");
for(i=0; i < n; i++)
{
printf("%d ", iNiz[i]);
}

int iTemp;
for(i=0; i < n; i++)
{
if(iNiz[0] < iNiz[i])
{
iTemp=iNiz[i];
iNiz[i]=iNiz[0];
iNiz[0]=iTemp;
}
}

printf("\nNovi niz: ");
for(i=0; i < n;i++)
{
printf("%d ", iNiz[i]);
}
return 0;
}