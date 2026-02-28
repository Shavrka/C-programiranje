/*
 * ZADATAK 08312046 - 08312046
 * Izračunati sumu brojeva u intervalu od a do b djeljivih sa 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312046.htm
 */

#include <stdio.h>

main()
{
int a,b,suma;

printf("Unesi A i B: \n");
scanf("%d%d",&a,&b);

do {
if(a % 5 == 0)
suma+=a;
a++;
} while(a <= b)

printf("Suma je: %d",suma);

return 0;
getchar();
}