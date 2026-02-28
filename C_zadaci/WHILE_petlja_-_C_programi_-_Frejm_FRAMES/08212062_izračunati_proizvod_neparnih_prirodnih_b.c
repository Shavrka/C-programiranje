/*
 * ZADATAK 08212062 - 08212062
 * Izračunati proizvod neparnih prirodnih brojeva od 1 do 5.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212062.htm
 */

#include <stdio.h>

int main()
{
int i=1,p;

while(i <= 5)
{
if(i % 2 != 0)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
}