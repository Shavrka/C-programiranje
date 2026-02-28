/*
 * ZADATAK 08315006 - 08315006
 * Napisati program za učitavanje 10 brojeva i ispis koliko je učitano negativnih, nula i pozitivnih brojeva.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08315006.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,br,br0,br1,n;
printf("Od 10 brojeva koliko je negativnih,nula i pozitivnih brojeva \n");

br=0;
br0=0;
br1=0;
i=1;
do
{
printf("%d",i);
printf(". broj: ");
scanf("%d",&n);
if(n < 0)
br=br+1;
else if (n == 0 )
br0=br0+1;
else if (n > 0)
br1=br1+1;
i++;
} do;
printf("Negativnih brojeva ima: %d \n",br);
printf("Nula ima: %d \n",br0);
printf("Pozitivnih brojeva ima: %d \n",br1);

return 0;
}