/*
 * ZADATAK 08311022 - 08311022
 * Napisati program za ispis kvadrata prirodnih brojeva od 1 do 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311022.htm
 */

#include <stdio.h>
#include <math.h>

main()
{
int i,kvadrat;

i=1;
do	{
printf("Kvadrat broja %d je %d \n",i,kvadrat=pow(i,2));
i++;
} while(i <= 5)

return 0;
getchar();
}