/*
 * ZADATAK 24011040 - 24011040
 * Sa tastature učitati cijeli broj n. Napuniti niz a sa prostim faktorima broja n i ispisati koliko ih ima...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011040.htm
 */

#include <stdio.h>
#include <stdlib.h>

int faktori(int a[], int n)
{
int i=0, k=n/2;
if(k>1)
while(n%2==0)
{
a[i]=2;
i++;
n/=2;
}
for(int j=3; j<=k; j+=2)
{
while((n%j)==0)
{
a[i]=j;
i++;
n/=j;
}
}
return i;
}

int main()
{
int niz[100]= {0}, broj, i=0;
scanf("%d", &broj);
printf("Broj prostih faktora:%d\n",  faktori(niz, broj));
printf("Prosti faktori:\n");
while(niz[i]!=0)
printf("%d ", niz[i++]);
return 0;
}