/*
 * ZADATAK 08311044 - 08311044
 * Ispisati prirodne brojeve od 1 do 5 koji nisu djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311044.htm
 */

#include <stdio.h>

main()

{
int i=1;
do	{
if(i % 3 != 0)
{
printf("%d",i);
}
i++;
} while(i<=5)

return 0;
getchar();
}