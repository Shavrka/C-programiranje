/*
 * ZADATAK 08212055 - 08212055
 * Napisati program za ispis proizvoda brojeva od 1 do n čija je cifra jedinica   3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212055.htm
 */

#include <stdio.h>

main() {
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

while(i <= n) {
if(i % 10 == 3)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}