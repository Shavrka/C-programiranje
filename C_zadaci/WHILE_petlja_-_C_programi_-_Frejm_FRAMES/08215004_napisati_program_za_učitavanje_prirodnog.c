/*
 * ZADATAK 08215004 - 08215004
 * Napisati program za učitavanje prirodnog broja i ispis sa kojim brojevima od 2 do 9 je djeljiv.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08215004.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,n;
printf("Broj: ");
scanf("%d",&n);
i=2;
while(i<=9)
{
if(n % i == 0)
printf("Djeljiv je sa: %d \n",i);
i++;
}
return 0;
}