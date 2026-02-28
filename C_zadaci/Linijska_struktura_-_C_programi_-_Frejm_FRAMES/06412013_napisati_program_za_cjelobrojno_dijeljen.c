/*
 * ZADATAK 06412013 - 06412013
 * Napisati program za cjelobrojno dijeljenje sa 100 i 10 kao i izračunavanje ostatka 100 i 10 trocifrenog broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06412013.htm
 */

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int broj, xd, xm, yd, ym;
printf("broj:");
scanf("%d",&broj);
xd = broj/100;
xm = broj%100;
yd = broj/10;
ym = broj%10;
printf("broj je %d\n",broj);
printf("broj div 100: %d , broj mod 100: %d\n",xd,xm);
printf("broj div 10: %d, broj mod 10: %d\n",yd,ym);

getchar();
}