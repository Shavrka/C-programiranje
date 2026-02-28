/*
 * ZADATAK 24011240 - 24011240
 * Napisati funkcije “FibIter“ i “FibRek“ i “FibRekBrza“ koje primaju jedan cjelobrojni parametar “N“, a koje računaju N-ti Fibonačijev broj respektivno iterativnim postupkom, klasičnim rekurzivnim postupkom, i rekurzivnim postupkom uz provedenu tehniku ubrzavanja (memoizaciju).
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011240.htm
 */

#include <stdio.h>
#include <stdlib.h>

int j;
int FibIter(int n)
{
if(n < 3)
return 1;
int a=1,b=1,c,i=3;
while((n/i++)>=1)
{
c=a+b;
b=a;
a=c;
}
return a;
}
int FibRek(int n)
{
j++;
if(n < 3)
{
if(j==1)
j--;
return 1;
}
return FibRek(n-1)+FibRek(n-2);
}
int FibRekBrza(int n)
{
static int F[100];
if(F[n]!=0)
return F[n];
if(n<3)
return F[n]=1;
else
{
if(j < 3)
j+=3;
else
j++;
return F[n]=FibRekBrza(n-1)+FibRekBrza(n-2);
}
}
int main()
{
int N;
scanf("%d", &N);
j=0;
printf("%d\n", FibRek(N));
j=0;
printf("%d\n", FibIter(N));
printf("%d\n", j);
j=0;
printf("%d\n", FibRekBrza(N));
printf("%d\n", j);
return 0;
}