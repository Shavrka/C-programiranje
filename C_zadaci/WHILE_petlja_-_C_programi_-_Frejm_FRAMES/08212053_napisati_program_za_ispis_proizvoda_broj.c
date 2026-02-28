/*
 * ZADATAK 08212053 - 08212053
 * Napisati program za ispis proizvoda brojeva od 1 do n koji su djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212053.htm
 */

#include <stdio.h>

main() {
int i=1,n,p=1,a;

printf("Unesi N: ");
scanf("%d",&n);

printf("Unesi A: ");
scanf("%d",&a);

while(i <= n) {
if(i % a == 0)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}