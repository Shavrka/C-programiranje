/*
 * ZADATAK 08312055 - 08312055
 * Izračunati proizvod brojeva od 1 do n čija je cifra jedinica 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312055.htm
 */

#include <stdio.h>

main()
{
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

do {
if(i % 10 == 3)
p*=i;
i++;
} while(i <= n)

printf("Proizvod je: %d",p);

return 0;
getchar();
}