/*
 * ZADATAK 24011220 - 24011220
 * Napisati rekurzivnu funkciju “NaopakiIspis“ bez parametara koja će nakon pozivanja tražiti od korisnika da unosi brojeve sa tastature sve dok korisnik unese nulu...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011220.htm
 */

#include <stdio.h>
#include <stdlib.h>

void NIspis()
{
int a;
scanf("%d", &a);
if(a!=0)
NIspis();
else
return;
printf("%d ", a);
}
int main()
{
NIspis();
return 0;
}