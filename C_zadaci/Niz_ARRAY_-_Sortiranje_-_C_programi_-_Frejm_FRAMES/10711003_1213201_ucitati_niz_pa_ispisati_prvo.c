/*
 * ZADATAK 10711003 - 10711003
 * 12.132.01. Ucitati niz pa ispisati prvo negativne, pa ostale članove niza. Ispisati članove niza tek poslije sortiranja.
 * Kategorija: Niz /ARRAY/ - Sortiranje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/107c/10711003.htm
 */

#include <stdio.h>

int main()
{
int n;
int i;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int A[n];
printf("\nUnesi elemente: \n");
for(i=0; i < n; i++)
{
scanf("%d", &A[i]);
}
int j;
int iTemp;
for(i=0; i < n-1; i++)
{
for(j=i+1; j < n; j++)
{
if(A[j] < 0)
{
iTemp=A[j];
A[j]=A[i];
A[i]=iTemp;
}
}
}
printf("\nIspis niza, prvo negativni:\n");
for(i=0; i < n;i++)
{
printf("%d ", A[i]);
}
return 0;
}