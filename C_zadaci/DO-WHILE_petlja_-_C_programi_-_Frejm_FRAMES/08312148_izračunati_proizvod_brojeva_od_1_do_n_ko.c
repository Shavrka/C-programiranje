/*
 * ZADATAK 08312148 - 08312148
 * Izračunati proizvod brojeva od 1 do n koji nisu djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312148.htm
 */

#include <stdio.h>

main()
{
int i=1,n,p=1,a;

printf("Unesi N: ");
scanf("%d",&n);

printf("Unesi A: ");
scanf("%d",&a);

do {
if(i % a != 0)
p*=i;
i++;
} while(i <= n)

printf("Proizvod je: %d",p);

return 0;
getchar();
}