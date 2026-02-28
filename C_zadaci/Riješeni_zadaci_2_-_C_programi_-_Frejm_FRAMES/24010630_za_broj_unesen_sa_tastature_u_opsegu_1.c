/*
 * ZADATAK 24010630 - 24010630
 * Za broj unesen sa tastature (u opsegu 1 – 1000000000) ispisuje njegove proste faktore razdvojene razmacima.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010630.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int a,b;
printf("Unesite broj koji zelite rastaviti na proste faktore:");
scanf("%d", &a);
printf("\nJedini rastav na faktor-e je sljedeci:\n\n");
if(a==1)
printf("1 ");
else
{
int k=a%2;
while(k==0)
{
b=a/2;
printf("2 ");
a=b;
k=a%2;
}
for(int j=3; j<=a; j+=2)
{
int k=a%j;
while(k==0)
{
b=a/j;
printf("%d ", j);
a=b;
k=a%j;
}
}
}
return 0;
}