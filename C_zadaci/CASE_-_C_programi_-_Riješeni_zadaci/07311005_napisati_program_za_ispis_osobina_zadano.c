/*
 * ZADATAK 7 - 07311005
 * Napisati program za ispis osobina zadanog kvadranta, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311005.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
printf("Kvadrant\nBroj Kvadranta: ");
scanf("%i",&a);

switch(a)
{
case 1:
printf("x>0  i   y>0\n");
break;
case 2:
printf("x<0  i   y>0\n");
break;
case 3:
printf("x < 0  i   y < 0\n");
break;
case 4:
printf("x>0  i   y < 0\n");
break;
default:
printf("Nevalidan unos\n");
break;
}

return 0;
}