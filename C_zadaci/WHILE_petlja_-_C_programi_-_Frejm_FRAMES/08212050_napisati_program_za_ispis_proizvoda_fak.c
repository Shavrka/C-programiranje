/*
 * ZADATAK 08212050 - 08212050
 * Napisati program za ispis proizvoda (faktorijele) brojeva od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212050.htm
 */

#include <stdio.h>

main() {
int i=1,p;

while(i<=5) {
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}