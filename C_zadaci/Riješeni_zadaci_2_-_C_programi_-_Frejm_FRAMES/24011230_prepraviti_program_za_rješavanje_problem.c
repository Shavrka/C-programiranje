/*
 * ZADATAK 24011230 - 24011230
 * Prepraviti program za rješavanje problema Hanojskih kula rađen na vježbama tako da se ispred svakog poteza ispisuje redni broj poteza. Drugim riječima, ispis treba da izgleda poput sljedećeg:1. potez: Prebaci disk sa štapa 1 na štap 3;2. potez: Prebaci disk sa štapa 1 na štap 23. potez: Prebaci disk sa štapa 3 na štap 2...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011230.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int Hanoi(int n,int x, int y, int z, int k)
{
if(n!=0)
{
k=Hanoi(n-1,x,z,y,k);
printf("%d. korak:", k++);
printf("Prebaci sa stapa %d na stap %d.\n", x, y);
k=Hanoi(n-1,z,y,x,k);
}
return k;
}

int main()
{
int br;
scanf("%d", &br);
Hanoi(br,1,2,3,1);
return 0;
}