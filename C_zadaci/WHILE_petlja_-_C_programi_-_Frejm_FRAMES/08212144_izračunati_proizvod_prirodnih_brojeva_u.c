/*
 * ZADATAK 08212144 - 08212144
 * Izračunati proizvod prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212144.htm
 */

#include <stdio.h>

main() {
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

while(i <= n) {
if(i % 3 == 0)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}