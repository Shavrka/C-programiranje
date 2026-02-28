/*
 * ZADATAK 08115008 - 08115008
 * Napisati program za učitavanje 10 brojeva i ispisati aritmetičku sredinu negativnih i aritmetičku sredinu pozitivnih brojeva kao i broj nula.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08115008.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,br,br0,s1,s,n,br1;
double as,as1;
printf("Od 10 brojeva ispisati aritmeticku sredinu pozitivnih,aritmeticku sredinu negativnih i broj nula \n");
s=0;
br0=0;
s1=0;
br=0;
br1=0;

for(i=1; i<=10; i++)
{
printf("%d",i);
printf(". broj: ");
scanf("%d",&n);
if(n < 0)
{
s=s+n;
br=br+1;
}
else if (n == 0 )
br0 = br0 + 1;
else if (n > 0)
{
s1=s1+n;
br1=br1+1;
}
}
as=0;
if(br > 0)
as=s/br;
as1=0;
if( br1 > 0)
as1=s1/br1;
printf("Aritmeticka sredina negativnih brojeva je: %lf \n",as);
printf("Nula ima: %d \n",br0);
printf("Aritmeticka sredina pozitivnih brojeva je: %lf \n",as1);
getchar();
return 0;
}