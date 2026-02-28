/*
 * ZADATAK 10511001 - 10511001
 * Učitati članove i naći najveći član niza.
 * Kategorija: Niz /ARRAY/ - Maksimum, minimum - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/105c/10511001.htm
 */

#include <stdio.h>
//  10511001
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

int max=iNiz[0];
for(i=1; i < n; i++)
{
if(iNiz[i]>max)
{
max=iNiz[i];
}
}

printf("Najveci je: %d", max);
return 0;
}