/*
 * ZADATAK 24011410 - 24011410
 * Pomoću naredbe “typedef“ definirajte novi tip “Mat3x3“ koji predstavlja matricu realnih brojeva formata 3 x 3 a zatim napišite funkciju “Determinanta“ sa jednim parametrom “A“ tipa “Mat3x3“ koja kao rezultat vraća determinantu ove matrice. Napisanu funkciju testirajte u programu koji će za tri para tačaka ... ispituje da li leže na istom pravcu...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011410.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
mat a;
for(int i=0; i < 3; i++)
{
for(int j=0; j < 2; j++)
scanf("%lf ",&a[i][j]);
}
if(det(a))
printf("jes!");
else
printf("no!");
return 0;
}