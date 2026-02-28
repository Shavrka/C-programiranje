/*
 * ZADATAK 08311017 - 08311017
 * Izračunati proizvoda od 1 do 10.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311017.htm
 */

#include <stdio.h>

main()
{
int i=1, p;

do {
p*=i;
i++;
} while(i<=10)

printf("Proizvod je: %d",p);

return 0;
getchar();
}