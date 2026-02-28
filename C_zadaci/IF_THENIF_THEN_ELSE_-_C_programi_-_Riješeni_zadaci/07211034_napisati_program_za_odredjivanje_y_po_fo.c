/*
 * ZADATAK 19 - 07211034
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211034.htm
 */

#include<stdio.h>

main()

{
int a,b,r;

printf("Unesite A i B:  ");
scanf("%d%d",&a,&b);

if((a % 2 == 0) && (b % 3 == 0))
{
r=a+b;
}
else
{
r=a-b;
}
printf("Rezultat je: %d",r);
return 0;
}