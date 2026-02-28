/*
 * ZADATAK 08212046 - 08212046
 * Naći sumu brojeva u intervalu od a do b djeljivih sa 5.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212046.htm
 */

#include <stdio.h>

main()
{
int a,b,suma;

printf("Unesi A i B: \n");
scanf("%d%d",&a,&b);

while(a <= b) {
if(a % 5 == 0)
suma+=a;
a++;
}

printf("Suma je: %d",suma);

return 0;
getchar();
}