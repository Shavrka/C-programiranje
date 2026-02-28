/*
 * ZADATAK 24010740 - 24010740
 * Napisati program koji traži da se sa tastature unese cijeli brojevi a i b, a koji zatim ispisuje sve savršene brojeve u opsegu od a do b.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010740.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
int a,b;
do
{
printf("Unesite a:");
scanf("%d",&a);
printf("Unesite b:");
scanf("%d",&b);
}
while(b < a);
bool t=true;
int i,j,d;
for(i=a+1; i < b; i++)
{
for(j=0,d=1; d<=i/2; d++)
j+=(i%d)?0:d;
if(i==j)
{
printf("%d ",i);
t=false;
}
}
if(t==true)
printf("Nema savrsenih brojeva.");
return 0;
}