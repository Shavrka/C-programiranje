/*
 * ZADATAK 08312177 - 08312177
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji imaju cifru jedinica 7.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312177.htm
 */

#include <stdio.h>

main()

{
int i, k, n;
float suma;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

i = k;
do {
if (i % 10 == 7)
s = s + i;     // suma += i;
i++;

} while (i<=n);

printf("Suma je: %f",suma);

return 0;
getchar();
}