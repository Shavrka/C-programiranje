/*
 * ZADATAK 237 - 08115007
 * Napisati program za učitavanje 10 brojeva i ispisati sumu negativnih i sumu pozitivnih brojeva kao i broj nula.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08115007.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,br0,s1,s,n;
printf("Od 10 brojeva ispisati sumu pozitivnih,sumu negativnih i broj nula \n");
s=0;
br0=0;
s1=0;
for(i=1; i<=10; i++)
{
printf("%d",i);
printf(". broj: ");
scanf("%d",&n);
if(n < 0)
s=s+n;
else if (n == 0 )
br0=br0+1;
else if (n > 0)
s1=s1+n;
}
printf("Suma negativnih brojeva je: %d \n",s);
printf("Nula ima: %d \n",br0);
printf("Suma pozitivnih brojeva je: %d \n",s1);
return 0;
}