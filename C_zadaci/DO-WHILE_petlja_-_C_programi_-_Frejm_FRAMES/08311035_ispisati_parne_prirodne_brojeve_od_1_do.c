/*
 * ZADATAK 08311035 - 08311035
 * Ispisati parne prirodne brojeve od 1 do 17.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311035.htm
 */

#include <stdio.h>

main()
{
int i=1;
do	{
if(i % 2 == 0)
{
printf("%d ",i);
}
i++;
} while(i <= 17)

return 0;
getchar();
}