/*
 * ZADATAK 08312041 - 08312041
 * Izračunati proizvod prirodnih od 1 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312041.htm
 */

#include <stdio.h>

main()
{
int i=1,n,p;

printf("Unesi N: ");
scanf("%d",&n);

do {
p*=i;
i++;
} while(i<=n)

printf("Proizvod je: %d",p);

return 0;
getchar();
}