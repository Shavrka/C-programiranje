/*
 * ZADATAK 08211037 - 08211037
 * Ispisati prirodne brojeve od 1 do 17 koji su djeljivi sa 3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211037.htm
 */

#include <stdio.h>

main()
{
int i=1;
while(i <= 17)
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