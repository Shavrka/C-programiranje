/*
 * ZADATAK 08315007 - 08315007
 * Napisati program za učitavanje 10 brojeva i ispisati sumu negativnih i sumu pozitivnih brojeva kao i broj nula.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08315007.htm
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
i=1;
do
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
i++;
} while(i<=10);
printf("Suma negativnih brojeva je: %d \n",s);
printf("Nula ima: %d \n",br0);
printf("Suma pozitivnih brojeva je: %d \n",s1);
return 0;
}