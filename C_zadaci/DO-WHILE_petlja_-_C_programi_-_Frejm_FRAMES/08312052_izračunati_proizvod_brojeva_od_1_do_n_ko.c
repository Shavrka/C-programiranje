/*
 * ZADATAK 08312052 - 08312052
 * Izračunati proizvod brojeva od 1 do n koji su djeljivi sa 3 i sa 4.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312052.htm
 */

#include <stdio.h>

main()

{
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

do {
if(i % 3 == 0 && i % 4 == 0)
p*=i;
i++;
} while(i <= n)

printf("Proizvod je: %d",p);

return 0;
getchar();
}