/*
 * ZADATAK 08211007 - 08211007
 * Napisati program za odredjivanje najvećeg
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211007.htm
 */

#include <stdio.h>
#include <math.h>

main()
{
int i,n,a,max;

printf("Najveci broj od n ucitanih brojeva \n");
printf("Brojeva za provjeru: ");
scanf("%d",&n);

printf("Otkucaj 1. broj: ");
scanf("%d",&a);

max=a;
i=2;
while(i<=n)
{
printf("Otkucaj: %d",i);
printf(". broj");
scanf("%d",&a);
if(a > max)
max = a;
i++;
}
printf("Najveci broj je: %d",max);
return 0;
}