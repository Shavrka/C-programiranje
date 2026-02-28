/*
 * ZADATAK 08312083 - 08312083
 * Napisati program da nađe proizvod prirodnih brojeva od a do b djeljivih sa l i koliko ih ima.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312083.htm
 */

#include <stdio.h>
#include <math.h>

main()

{
int i,a,b,l,br;
float p;

printf("Prebroj i pomnozi djeljive sa l \n");

printf("Od broja: ");
scanf("%d",&a);

printf("Do broja: ");
scanf("%d",&b);

printf("Djelilac: ");
scanf("%d",&l);

br=0;
p=1;
i=a;
do while(i<=b)
{
if(i % l == 0)
{
p=p*i;
br=br+1;
i++;
}
}
printf("Proizvod prirodnih brojeva djeljivih sa: %d \n",l);
printf("Od %d \n",a);
printf("Do %d \n",b);
printf("Je %f \n",p);
printf("Djeljivih sa %d \n",l);
printf("Ima %d",br);

return 0;

}