/*
 * ZADATAK 08315009 - 08315009
 * Napisati program za nalaženje zajedničkog djelioca 2 učitana broja.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08315009.htm
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
do
{
if((a % i == 0) && (b % i == 0) && (i != 1))
i++;
} while(i<=n);

printf("i= %d",i);

return 0;
}