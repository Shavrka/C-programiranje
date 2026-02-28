/*
 * ZADATAK 08212042 - 08212042
 * Naći proizvod prirodnih brojeva u intervalu od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212042.htm
 */

#include <stdio.h>

int main()
{
int k=1,n,p=1;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

while(k <= n)  {
p*=k;
k++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}