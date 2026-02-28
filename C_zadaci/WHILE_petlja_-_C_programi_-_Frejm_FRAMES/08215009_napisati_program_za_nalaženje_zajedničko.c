/*
 * ZADATAK 08215009 - 08215009
 * Napisati program za nalaženje zajedničkog djelioca 2 učitana broja.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08215009.htm
 */

#include <stdio.h>
#include <math.h>

main()
{
int a,b,i,n;

printf("Unesi broj a: ");
scanf("%d",&a);

printf("Unesi broj b: ");
scanf("%d",&b);
printf("Do kog broja vrsis ispis djelilaca: ");
scanf("%d",&n);

i=1;
while(i<=n)
{
if((a % i == 0) && (b % i == 0) && (i != 1))
i++;
}

printf("i= %d",i);

return 0;
}