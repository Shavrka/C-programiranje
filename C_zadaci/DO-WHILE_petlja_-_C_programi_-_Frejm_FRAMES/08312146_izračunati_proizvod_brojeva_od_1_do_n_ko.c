/*
 * ZADATAK 08312146 - 08312146
 * Izračunati proizvod brojeva od 1 do n koji nisu djeljivi sa 7.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312146.htm
 */

#include <stdio.h>

main()
{
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

do {
if(i % 7 != 0)
p*i;
i++;
} while(i <= n)

printf("Proizvod je: %d",p);

return 0;
getchar();
}