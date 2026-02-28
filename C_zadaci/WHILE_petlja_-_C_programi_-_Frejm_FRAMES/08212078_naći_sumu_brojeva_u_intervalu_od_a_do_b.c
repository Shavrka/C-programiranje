/*
 * ZADATAK 08212078 - 08212078
 * Naći sumu brojeva u intervalu od a do b djeljivih sa 5 i koliko ih ima.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212078.htm
 */

#include <stdio.h>
#include <math.h>

main()

{
int i,a,b,br;
float s;

printf("a,b= \n");
scanf("%d %d",&a,&b);

br=0;
s=0;
i=a;
while(i<=b)
{
if(i % l == 0)
{
s=s+i;
br=br+1;
}
i++;
}
printf("Od %d \n",a);
printf("Do %d \n",b);
printf("Ima %d \n",br);
printf("Djeljivih sa: 5 \n");
printf("Njihova suma je: %f \n",s);

return 0;
}