/*
 * ZADATAK 08112046 - 08112046
 * Naći sumu brojeva u intervalu od a do b djeljivih sa 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112046.htm
 */

#include <stdio.h>
int main ()
{
int a, b;

printf("Unesite A i B: ");
scanf("%d%d",&a,&b);

for(; a <= b; a++)
if(a % 5 == 0)
printf("%d ",a);

return 0;
}