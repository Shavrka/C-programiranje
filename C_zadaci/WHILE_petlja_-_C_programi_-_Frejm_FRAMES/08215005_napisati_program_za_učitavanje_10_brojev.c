/*
 * ZADATAK 08215005 - 08215005
 * Napisati program za učitavanje 10 brojeva i ispis koliko je učitanih je djeljivo sa 7.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08215005.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,br,n;
printf("Od 10 brojeva koliko je djeljivih sa 7 \n");
br=0;
i=1;
while(i<=10)
{
printf("%d",i);
printf(" . broj: ");
scanf("%d",&n);
if(n % 7 == 0)
br=br+1;
i++;
}
printf("Sa 7 je djeljivo: %d",br);
printf(" brojeva");
return 0;
}