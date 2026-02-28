/*
 * ZADATAK 08312061 - 08312061
 * Izračunati proizvod parnih prirodnih brojeva od 1 do 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312061.htm
 */

#include <stdio.h>

main()
{
int i=1,p;

do {
if(i % 2 == 0)
p*=i;
i++;
} while(i <= 5)

printf("Proizvod je: %d",p);

return 0;
getchar();
}