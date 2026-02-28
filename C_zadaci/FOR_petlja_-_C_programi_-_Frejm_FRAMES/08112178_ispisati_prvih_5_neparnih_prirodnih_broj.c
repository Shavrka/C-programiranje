/*
 * ZADATAK 08112178 - 08112178
 * Ispisati prvih 5 neparnih prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112178.htm
 */

#include <stdio.h>

int main ()
{
int i, br;

for(i=1; i <= 5; ++i) {		// ponavljanje za i=1 do i=5
br = 2 * i - 1;  		// neparan: 2n-1
printf("%d \n", br);
}
return 0;
}