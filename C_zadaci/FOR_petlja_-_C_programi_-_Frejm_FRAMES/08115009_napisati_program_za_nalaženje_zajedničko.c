/*
 * ZADATAK 08115009 - 08115009
 * Napisati program za nalaženje zajedničkog djelioca 2 učitana broja.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08115009.htm
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

for(i=1; i<=n; i++)
if((a % i == 0) && (b % i == 0) && (i != 1))

printf("i= %d",i);

return 0;
}