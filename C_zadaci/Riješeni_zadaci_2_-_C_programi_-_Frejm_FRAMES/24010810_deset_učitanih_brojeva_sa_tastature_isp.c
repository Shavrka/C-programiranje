/*
 * ZADATAK 24010810 - 24010810
 * Deset učitanih brojeva sa tastature, ispisati: u jednom redu brojeve koji su parni, a u drugom redu brojeve koji su neparni...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010810.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[10], b[10], c[10];
int n=0, m=0;
for(int i=0; i < 10; i++)
{
scanf("%d", &a[i]);
}
for(int i=0; i < 10; i++)
{
if(a[i]%2==0)
{
b[i]=a[i];
c[i]=0;
}
else
{
c[i]=a[i];
b[i]=0;
}
}
int i;
for(i=0; i < 10; i++)
if(b[i]!=0)
{
printf("%d", b[i]);
break;
}
for(int j=i+1; j < 10; j++)
if(b[j]!=0 && b[i]!=0)
printf(",%d", b[j]);
printf("\n");
for(i=0; i < 10; i++)
if(c[i]!=0)
{
printf("%d", c[i]);
break;
}
for(int j=i+1; j < 10; j++)
if(c[j]!=0 && c[i]!=0)
printf(",%d", c[j]);
return 0;
}