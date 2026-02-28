/*
 * ZADATAK 08312042 - 08312042
 * Izračunati proizvod prirodnih od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312042.htm
 */

#include <stdio.h>

main()
{
int k=1,n,p=1;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

do {
p*=k;
k++;
} while(k <= n)

printf("Proizvod je: %d",p);

return 0;
getchar();
}