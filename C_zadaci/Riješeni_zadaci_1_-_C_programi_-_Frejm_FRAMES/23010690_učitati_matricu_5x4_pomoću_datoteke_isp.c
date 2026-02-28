/*
 * ZADATAK 23010690 - 23010690
 * Učitati matricu 5x4 pomoću datoteke. Ispisati red (kolonu) sa najvećom sumom.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010690.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
FILE *ulaz;
if(ulaz= fopen("matrica.txt","r"))
{
FILE* izlaz;
izlaz=fopen("maxredkol.txt","w");
{
int a[6][6], sumaR=0, sumaK=0;
int red, kol, maxR=INT_MIN, maxK=INT_MIN;
for(int i=0; i<5; i++)
{
for(int j=0; j<4; j++)
{
fscanf(ulaz, "%d ", &a[i][j]);
sumaR=sumaR+a[i][j];
}
if(sumaR>maxR)
{
maxR=sumaR;
red=i;
}
sumaR=0;
}
for(int j=0; j<4; j++)
{
for(int i=0; i<5; i++)
sumaK=sumaK+a[i][j];
if(sumaK>maxK)
{
maxK=sumaK;
kol=j;
}
sumaK=0;
}
fprintf(izlaz, "%d. red ima max sumu.", red+1);
for(int j=0; j < 4; j++)
fprintf(izlaz,"%d ", a[red][j]);

fprintf(izlaz, "\n%d. kolona ima max sumu.", kol+1);
for(int i=0; i < 5; i++)
fprintf(izlaz, "%d ", a[i][kol]);

fclose(izlaz);
fclose(ulaz);
}
}
return 0;
}