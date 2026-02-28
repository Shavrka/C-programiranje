/*
 * ZADATAK 188 - 08112078
 * Naći sumu brojeva u intervalu od a do b djeljivih sa 5 i koliko ih ima.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112078.htm
 */

#include <stdio.h>
#include <math.h>

main()

{
int i,a,b,l,br;
float s;

printf("a,b,l= \n");
scanf("%d %d %d",&a,&b,&l);

br=0;
s=0;

for(i=a; i<=b; i++)

if(i % l == 0)
{
s=s+i;
br=br+1;
}
printf("Od %d \n",a);
printf("Do %d \n",b);
printf("Ima %d \n",br);
printf("Djeljivih sa: %d \n",l);
printf("Njihova suma je: %f \n",s);

return 0;
}