/*
 * ZADATAK 08212021 - 08212021
 * Suma neparnih prirodnih brojeva od 1 do 5.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212021.htm
 */

#include <stdio.h>

int main ()
{
int suma,i=1;

while(i<=5) {
if(i % 2 != 0)
suma+=i;
i++;
}
printf("Suma je: %d",suma);

return 0;
}