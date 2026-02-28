/*
 * ZADATAK 08212148 - 08212148
 * Izračunati proizvod brojeva od 1 do n koji nisu djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212148.htm
 */

#include <stdio.h>

int main() {
int i=1,n,p=1,a;

printf("Unesi N: ");
scanf("%d",&n);

printf("Unesi A: ");
scanf("%d",&a);

while(i <= n) {
if(i % a != 0)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
}