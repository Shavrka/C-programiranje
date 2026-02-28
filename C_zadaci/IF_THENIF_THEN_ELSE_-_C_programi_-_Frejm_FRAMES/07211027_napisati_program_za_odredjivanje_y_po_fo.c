/*
 * ZADATAK 07211027 - 07211027
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211027.htm
 */

#include <stdio.h>

int main()
{
int x,y;

printf("Vas broj: ");
scanf("%d",&x);

if(x < 3)         // ako je x manje od 3 ?
y = x - 1;    // x < 3   ==>   y = x - 1
else              // inace
y = x + 3;    // y = x + 3

printf("Vrijednost izraza za x= %d ",x);
printf(" y= %d",y);

return 0;
}