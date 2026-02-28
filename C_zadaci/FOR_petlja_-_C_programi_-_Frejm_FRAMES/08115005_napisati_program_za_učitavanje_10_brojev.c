/*
 * ZADATAK 08115005 - 08115005
 * Napisati program za učitavanje 10 brojeva i ispis koliko je učitanih je djeljivo sa 7.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08115005.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,br,n;
printf("Od 10 brojeva koliko je djeljivih sa 7 \n");
br=0;
for(i=1; i<=10; i++)
{
printf("%d",i);
printf(" . broj: ");
scanf("%d",&n);
if(n % 7 == 0)
br=br+1;
}
printf("Sa 7 je djeljivo: %d",br);
printf(" brojeva");
return 0;
}