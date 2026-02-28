/*
 * ZADATAK 08212052 - 08212052
 * Napisati program za ispis proizvoda brojeva od 1 do n koji su djeljivi sa 4 i   sa 3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212052.htm
 */

#include <stdio.h>

main() {
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

while(i <= n) {
if(i % 3 == 0 && i % 4 == 0)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}