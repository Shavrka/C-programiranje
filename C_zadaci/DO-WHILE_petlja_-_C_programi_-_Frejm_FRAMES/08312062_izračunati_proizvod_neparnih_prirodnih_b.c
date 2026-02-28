/*
 * ZADATAK 08312062 - 08312062
 * Izračunati proizvod neparnih prirodnih brojeva od 1 do 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312062.htm
 */

#include <stdio.h>

main()

{
int i=1,p;

do {
if(i % 2 != 0)
p*=i;
i++;
} while(i <= 5)

printf("Proizvod je: %d",p);

return 0;
getchar();
}