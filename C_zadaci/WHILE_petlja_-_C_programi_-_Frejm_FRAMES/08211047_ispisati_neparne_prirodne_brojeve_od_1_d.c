/*
 * ZADATAK 08211047 - 08211047
 * Ispisati neparne prirodne brojeve od 1 do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211047.htm
 */

#include <stdio.h>

int main ()
{
int i, n;

printf("Unesite gornju granicu: ");
scanf("%d",&n);

i = 1;
while(i <= n)
{
if(i % 2 != 0)
{
printf("%d ",i);
}
i++;
}
return 0;
}