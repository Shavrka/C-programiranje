/*
 * ZADATAK 24011610 - 24011610
 * Napisati funkciju sa jednim argumentom n koja kreira dinamički niz od n cijelih brojeva, popunjava ga sa prvih n Fibonačijevih brojeva...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011610.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int *niz=fibonacci(n);
for(int i=0; i < n; i++)
printf("%d ", niz[i]);
free(niz);
return 0;
}