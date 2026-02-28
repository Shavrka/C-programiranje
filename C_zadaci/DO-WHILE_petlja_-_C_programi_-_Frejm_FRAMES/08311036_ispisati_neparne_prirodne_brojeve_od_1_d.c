/*
 * ZADATAK 08311036 - 08311036
 * Ispisati neparne prirodne brojeve od 1 do 17.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311036.htm
 */

#include <stdio.h>

int main ()
{
int i=1;
do
{
if(i%2==1)
{
printf("%d\n", i);
}
i++;
}while (i <= 17);
return 0;
}