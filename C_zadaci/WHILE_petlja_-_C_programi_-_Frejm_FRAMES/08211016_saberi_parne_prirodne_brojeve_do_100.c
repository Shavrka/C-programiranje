/*
 * ZADATAK 08211016 - 08211016
 * Saberi parne  prirodne brojeve do 100.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211016.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0;
while (i<=100)
{
if (i%2==0){s=s+i;}
i++;
}
printf("Suma iznosi: %d", s);
return 0;
}