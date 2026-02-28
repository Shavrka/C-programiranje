/*
 * ZADATAK 08312078 - 08312078
 * Naći sumu brojeva u intervalu od a do b djeljivih sa 5 i koliko ih ima.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312078.htm
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
i=a;
do
{
if(i % l == 0)
{
s=s+i;
br=br+1;
}
i++;
} while(i<=b);
printf("Od %d \n",a);
printf("Do %d \n",b);
printf("Ima %d \n",br);
printf("Djeljivih sa: %d \n",l);
printf("Njihova suma je: %f \n",s);

return 0;
}