/*
 * ZADATAK 08311037 - 08311037
 * Ispisati prirodne brojeve od 1 do 17 koji su djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311037.htm
 */

#include <stdio.h>

main()
{
int i=1;
do	{
if(i % 3 == 0)
{
printf("%d ",i);
}
i++;
} while(i <= 17)

return 0;
getchar();
}