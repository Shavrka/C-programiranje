/*
 * ZADATAK 24011030 - 24011030
 * ... Za članove niza napisati funkciju koja računa broj elemenata niza koji su manji odnosno koji su veći od aritmetičke sredine svih elemenata niza.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011030.htm
 */

#include <stdio.h>
#include <stdlib.h>

void statistika(double a[], int n, int *br1, int *br2)
{
double s=0;
for(int i=0; i < n; i++)
s+=a[i];
double as=s/n;
for(int i=0; i < n; i++)
{
if(a[i]>as)
(*br2)++;
else if(a[i] < as)
(*br1)++;
}
}

int main()
{
int n, br1=0, br2=0;
printf("Broj clanova niza:");
scanf("%d", &n);
double a[n];
for(int i=0; i < n; i++)
scanf("%lf", &a[i]);
statistika(a, n, &br1, &br2);
printf("Broj elemenata manjih od a.s.:%d\n", br1);
printf("Broj elemenata vecih od a.s.:%d", br2);
return 0;
}