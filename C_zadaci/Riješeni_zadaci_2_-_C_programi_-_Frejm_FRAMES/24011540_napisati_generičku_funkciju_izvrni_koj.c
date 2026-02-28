/*
 * ZADATAK 24011540 - 24011540
 * Napisati generičku funkciju “Izvrni” koja obavlja isti zadatak kao funkcija “reverse” iz biblioteke “algorithm”. Funkciju treba realizirati isključivo korištenjem pokazivačke aritmetike.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011540.htm
 */

#include <stdio.h>
#include <stdlib.h>

void izvrni(tip *poc, tip *kraj)
{
tip a;
while(poc < kraj)
{
a=*poc;
*poc=*(kraj-1);
*(kraj-1)=a;
poc++;
kraj--;
}
}
int main()
{
double niz[20];
int n;
scanf("%d", &n);
for(int i=0; i < n; i++)
scanf("%lf", &niz[i]);
izvrni(niz,niz+n);
for(int i=0; i < n; i++)
printf("%.2lf ", niz[i]);
return 0;
}