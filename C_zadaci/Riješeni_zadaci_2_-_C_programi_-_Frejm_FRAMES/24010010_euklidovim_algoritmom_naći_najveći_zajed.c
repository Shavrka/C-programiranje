/*
 * ZADATAK 24010010 - 24010010
 * Euklidovim algoritmom naći najveći zajednički djelilac dva prirodna broja.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010010.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int k, n, temp, ost;
printf("Prvi broj:");
scanf("%d", &k);
printf("Drugi broj:");
scanf("%d", &n);
if (k>n)
{
temp = k;
k = n;
n = temp;
}
printf("Za brojeve %d i %d ", k, n);
do
{
ost = n % k;
n = k;
k = ost;
}
while (k > 0);
printf("NZD je %d.", n);

return 0;
}