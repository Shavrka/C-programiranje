/*
 * ZADATAK 08115004 - 08115004
 * Napisati program za učitavanje prirodnog broja i ispis sa kojim brojevima od 2 do 9 je djeljiv.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08115004.htm
 */

#include <stdio.h>
#include <math.h>
main()
{
int i,n;
printf("Broj: ");
scanf("%d",&n);
for(i=2; i<=9; i++)
if(n % i == 0)
printf("Djeljiv je sa: %d \n",i);
return 0;
}