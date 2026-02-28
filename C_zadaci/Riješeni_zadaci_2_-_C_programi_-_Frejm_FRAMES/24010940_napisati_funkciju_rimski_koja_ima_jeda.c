/*
 * ZADATAK 24010940 - 24010940
 * Napisati funkciju “rimski“ koja ima jedan parametar “n” koji treba biti prirodan broj manji od 4000 i koja ispisuje odgovarajući broj u rimskoj notaciji...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010940.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
while((scanf("%d", &n))&&n!=0)
{
if(n<4000)
{
rimski(n);
}
}
return 0;
}