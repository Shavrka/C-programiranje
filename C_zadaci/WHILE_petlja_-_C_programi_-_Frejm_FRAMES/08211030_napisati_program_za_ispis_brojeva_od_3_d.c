/*
 * ZADATAK 08211030 - 08211030
 * Napisati program za ispis brojeva od 3 do n
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211030.htm
 */

#include <stdio.h>

main()
{
int i,n;
printf("Unesi N: ");
scanf("%d",&n);

i=3;
while(i<=n)
{
printf("%d ",i);
i++;
}
return 0;
getchar();
}