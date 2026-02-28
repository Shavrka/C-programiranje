/*
 * ZADATAK 08312021 - 08312021
 * Suma neparnih prirodnih brojeva od 1 do 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312021.htm
 */

#include <stdio.h>

main()
{
int suma,i=1;

do {
if(i % 2 != 0)
suma+=i;
i++;
} while(i<=5)

printf("Suma je: %d",suma);

return 0;
getchar();
}