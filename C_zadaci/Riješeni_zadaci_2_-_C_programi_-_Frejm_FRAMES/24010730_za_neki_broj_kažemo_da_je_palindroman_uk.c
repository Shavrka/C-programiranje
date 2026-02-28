/*
 * ZADATAK 24010730 - 24010730
 * Za neki broj kažemo da je palindroman ukoliko je jednak broju koji se dobije čitanjem njegovih cifara u obrnutom poretku.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010730.htm
 */

#include <stdlib.h>

int main()
{
int n;
printf("Unesi neki broj:");
scanf("%d",&n);
int a=n;
int c,d=0;
while(n!=0)
{
c=n%10;
d=d*10+c;
n=n/10;
}
if(a==d)
printf("Broj je palindrom.");
else
printf("Broj nije palindrom.");
return 0;
}