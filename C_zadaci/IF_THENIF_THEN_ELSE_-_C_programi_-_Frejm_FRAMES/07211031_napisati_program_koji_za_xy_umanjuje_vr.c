/*
 * ZADATAK 07211031 - 07211031
 * Napisati program koji za x>y umanjuje vrijednosti obe varijable ( x := x - 2; y := y - 2,) inaće uvećava vrijednosti obe varijable x := x + 2; y := y + 2.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211031.htm
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
if (x > y)            //  (x > y)?
{                   //  (x > y)?   da
x = x - 2;
y = y - 2;
}
else
{                    //  (x > y)?   ne
x = x + 2;
y = y + 2;
}

printf("Novi prvi broj %d\n",x);
printf("Novi drugi broj %d ",y);

return 0;
}