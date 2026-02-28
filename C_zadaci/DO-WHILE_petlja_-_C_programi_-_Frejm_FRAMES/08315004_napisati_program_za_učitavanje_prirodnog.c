/*
 * ZADATAK 08315004 - 08315004
 * Napisati program za učitavanje prirodnog broja i ispis sa kojim brojevima od 2 do 9 je djeljiv.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08315004.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,n;
printf("Broj: ");
scanf("%d",&n);
i=2;
do
{
if(n % i == 0)
printf("Djeljiv je sa: %d \n",i);
i++;
} while(i<=9);
return 0;
}