/*
 * ZADATAK 08312009 - 08312009
 * Suma parnih prirodnih brojeva od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312009.htm
 */

#include <stdio.h>

int main ()
{
int s=0,n,k;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
do
{
if(k%2==0){
s=s+k;
}
k++;
} while (k<=n);
printf("Suma iznosi: %d", s);
return 0;
}