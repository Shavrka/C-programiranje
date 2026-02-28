/*
 * ZADATAK 07211025 - 07211025
 * Napisati program koji za y > x računa x i y prema izrazima: x = x - 1; y = x + 2 inače x = x + 1; y = x - 2.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211025.htm
 */

#include <stdio.h>

int main ()
{
printf("Poredjenje brojeva i promjena vrijednosti\n");
int x, y;

printf("Prvi broj: ");       // ulazne vrijednosti
scanf("%d",&x);
printf("Drugi broj: ");       // ulazne vrijednosti
scanf("%d",&y);
if (y > x)            //  (y > x)?
{                   //  (y > x)?   da
x = x - 1;
y = y + 2;
}
else
{                    //  (y > x)?   ne
x = x + 1;
y = y - 2;
}

printf("Novi prvi broj %d\n",x);
printf("Novi drugi broj %d ",y);

return 0;
}