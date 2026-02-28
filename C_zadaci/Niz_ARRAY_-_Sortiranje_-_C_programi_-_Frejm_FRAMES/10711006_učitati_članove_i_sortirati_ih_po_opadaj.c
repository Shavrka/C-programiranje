/*
 * ZADATAK 10711006 - 10711006
 * Učitati članove i sortirati ih po opadajućem redoslijedu (metodom susjednih članova).
 * Kategorija: Niz /ARRAY/ - Sortiranje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/107c/10711006.htm
 */

#include <stdio.h>

// P10711005 {

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
for(i=1; i < n; i++)
{
for(j=i-1; j >= 0 && A[j] < A[j+1];j--)
{
iTemp=A[j];
A[j]=A[j+1];
A[j+1]=iTemp;
}
}
printf("\nIspis niza sortiranog po opadajucem redoslijedu:\n");
for(i=0; i < n; i++)
{
printf("%d ", A[i]);
}
return 0;
}

Ispis na ekranu:
Uredjeni niz:
Unesi broj clanova 5
5 7 2 4

Uredjeni niz:
5 4 2 0