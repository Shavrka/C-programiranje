/*
 * ZADATAK 08212146 - 08212146
 * Izračunati proizvod brojeva od 1 do n koji nisu djeljivi sa 7.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212146.htm
 */

#include <stdio.h>

main() {
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

while(i <= n) {
if(i % 7 != 0)
p*i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}