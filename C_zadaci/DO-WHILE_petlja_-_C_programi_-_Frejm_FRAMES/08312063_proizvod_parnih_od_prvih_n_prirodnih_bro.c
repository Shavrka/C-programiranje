/*
 * ZADATAK 08312063 - 08312063
 * Proizvod parnih od prvih n prirodnih brojeva.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312063.htm
 */

#include <stdio.h>

main()
{
int i=1,n,p;

printf("Unesi N: ");
scanf("%d",&n);

do {
if(i % 2 == 0)
p*=i;
i++;
} while(i<=n)

printf("Proizvod je: %d",p);

return 0;
getchar();
}