/*
 * ZADATAK 24011050 - 24011050
 * Sa tastature učitati elemente niza. Napisati funkcija koja treba da ispremješta elemente niza tako da prvi element postane posljednji, a posljednji prvi.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011050.htm
 */

#include <stdio.h>
#include <stdlib.h>

void izvrni_niz(int a[],int n)
{
int x;
for(int j=0; j < n/2; j++)
{
x=a[j];
a[j]=a[n-j-1];
a[n-j-1]=x;
}
}
int main()
{
int n;
printf("Broj clanova niza:");
scanf("%d", &n);
int a[n];
for(int i=0; i < n; i++)
scanf("%d", &a[i]);
izvrni_niz(a,n);
for(int i=0; i < n; i++)
printf("%d ", a[i]);
return 0;
}