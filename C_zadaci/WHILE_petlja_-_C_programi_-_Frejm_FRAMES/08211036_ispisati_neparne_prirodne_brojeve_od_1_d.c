/*
 * ZADATAK 08211036 - 08211036
 * Ispisati neparne prirodne brojeve od 1 do 17.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211036.htm
 */

#include <stdio.h>

int main ()
{
int i=1;
while (i<=17)
{
if(i%2==1)
{
printf("%d\n", i);
}
i++;
}
return 0;
}