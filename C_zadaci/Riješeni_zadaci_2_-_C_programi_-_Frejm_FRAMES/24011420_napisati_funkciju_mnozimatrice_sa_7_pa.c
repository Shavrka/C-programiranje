/*
 * ZADATAK 24011420 - 24011420
 * Napisati funkciju “MnoziMatrice“ sa 7 parametara “mat1”, “mat2”, “mat3”, “m1”, “n1”, “m2“ i “n2”. Prva tri parametra predstavljaju matrice realnih brojeva maksimalnih dimenzija 20 x 20, dok su “m1”, “n1”, “m2“ i “n2“ stvarne dimenzije matrica “mat1“ i “mat2”... Ako su matrice “mat1“ i “mat2“ jesu saglasne za množenje, funkcija treba da izračuna produkt matrica “mat1“ i “mat2“ i da rezultat množenja smjesti u matricu “mat3”...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011420.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
matrice m1,m2,m3;
for(int i=0; i < 3; i++)
{
for(int j=0; j < 2; j++)
scanf("%lf", &m1[i][j]);
}
for(int i=0; i < 2; i++)
{
for(int j=0; j < 3; j++)
scanf("%lf", &m2[i][j]);
}
if(mnozi_matrice(m1,m2,m3,3,2,2,3))
{
printf("Yes!\n");
for(int i=0; i < 3; i++)
{
for(int j=0; j < 3; j++)
printf("%.2lf ", m3[i][j]);
printf("\n");
}
}
else
printf("No!\n");
return 0;
}