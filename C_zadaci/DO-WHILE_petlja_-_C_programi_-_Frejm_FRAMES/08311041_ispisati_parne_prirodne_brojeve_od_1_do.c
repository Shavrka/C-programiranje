/*
 * ZADATAK 08311041 - 08311041
 * Ispisati parne prirodne brojeve od 1 do 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311041.htm
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
} while(i<=5)

return 0;
getchar();
}