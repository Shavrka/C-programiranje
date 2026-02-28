/*
 * ZADATAK 08112064 - 08112064
 * Proizvod neparnih od prvih n prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112064.htm
 */

#include <stdio.h>

int main ()
{
int i, n;               // deklarisanje varjabli
float p=1;              // pocetna vrijednost kumulativnog proizvoda

printf("Proizvod neparnih do n\n");  // naslov, \n - prelazak u nvoi red
printf("Do broja: ");
scanf("%d",&n);         // ulaz n

for(i=1; i <= n; i++)   // for(;i<=n;i++)
if(i % 2 != 0)      // i neparno?
p*=i;           // da, uvecaj proizvod p=p*i

printf("Proizvod = %f", p);  // izlaz

return 0;
}