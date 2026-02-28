/*
 * ZADATAK 08211043 - 08211043
 * Ispisati prirodne brojeve od 1 do 5 koji su djeljivi sa 3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211043.htm
 */

#include <stdio.h>

main()

{
int i=1;
while(i<=5)
{
if(i % 3 == 0)
{
printf("%d ",i);
}
i++;
}
return 0;
getchar();
}