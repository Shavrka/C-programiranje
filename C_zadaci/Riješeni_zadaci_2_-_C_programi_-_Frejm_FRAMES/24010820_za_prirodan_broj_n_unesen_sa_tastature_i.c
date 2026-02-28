/*
 * ZADATAK 24010820 - 24010820
 * Za prirodan broj n unesen sa tastature ispisuje na ekranu elemente Pascalovog trougla visine n. Na primjer ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010820.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int n;
scanf("%d", &n);
int i, j, l;
if(n==1)
printf("%4d", 1);
else
{
int a[n],b[n];
for(int k=0; k < n; k++)
{
a[0]=1;
a[k]=0;
}
for(i=0; i < n; i++)
{
for(j=0; j < n; j++)
if(a[j]!=0)
printf("%4d", a[j]);
printf("\n");
for(l=n-1; l>0; l--)
b[l]=a[l-1]+a[l];
for(int p=1; p < n; p++)
a[p]=b[p];
}
}
return 0;
}