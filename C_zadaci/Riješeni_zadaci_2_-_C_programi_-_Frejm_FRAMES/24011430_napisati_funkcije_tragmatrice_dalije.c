/*
 * ZADATAK 24011430 - 24011430
 * Napisati funkcije “TragMatrice”, “DaLiJeGornjaTrougaona” i “Transpozicija”. Sve tri funkcije su generičke, i primaju dva parametra, “A“ i “N”... Funkcije su: “TragMatrice“ - suma elemenata na glavnoj dijagonali, “DaLiJeGornjaTrougaona“ logičku vrijednost “true”...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011430.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int A[3][3];
for(int i=0; i < 3; i++)
{
for(int j=0; j < 3; j++)
scanf("%d", &A[i][j]);
}
printf("%d\n",trag_mat(A,3));
if(gornja_trougaona(A,3))
printf("Yes!\n");
else
printf("No!\n");
transp(A,3);
for(int i=0; i < 3; i++)
{
for(int j=0; j < 3; j++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
return 0;
}