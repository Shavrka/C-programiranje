/*
 * ZADATAK 236 - 08115006
 * Napisati program za učitavanje 10 brojeva i ispis koliko je učitano negativnih, nula i pozitivnih brojeva.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08115006.htm
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
for(i=1; i<=10; i++)
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
}
printf("Negativnih brojeva ima: %d \n",br);
printf("Nula ima: %d \n",br0);
printf("Pozitivnih brojeva ima: %d \n",br1);

return 0;
}