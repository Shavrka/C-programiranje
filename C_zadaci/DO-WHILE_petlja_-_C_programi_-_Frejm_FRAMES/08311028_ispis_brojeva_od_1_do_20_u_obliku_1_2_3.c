/*
 * ZADATAK 08311028 - 08311028
 * Ispis brojeva od 1 do 20 u obliku: 1 2 3 4 5 6 7 8 9 ......20
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311028.htm
 */

#include <stdio.h>

main()
{
int i=1;
do	{
printf("%d \n",i);
i++;
} while(i <= 20)

return 0;
getchar();
}