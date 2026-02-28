/*
 * ZADATAK 231 - 08111007
 * Napisati program za određjivanje najvećeg broja od n učitanih.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111007.htm
 */

#include <stdio.h>

int main ()
{
int i,n,a,max;

printf("Najveci broj od n ucitanih brojeva \n");
printf("Brojeva za provjeru: ");
scanf("%d",&n);

printf("Otkucaj: 1. broj: ");
scanf("%d",&a);

max=a;
for(i=2; i<=n; i++)
{
printf("Otkucaj: %d",i);
printf(". broj ");
scanf("%d",&a);
if(a > max)
max = a;
}
printf("Najveci broj je: %d",max);
return 0;
}