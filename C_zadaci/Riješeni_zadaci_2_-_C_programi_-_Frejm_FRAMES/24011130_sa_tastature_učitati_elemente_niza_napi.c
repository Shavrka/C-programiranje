/*
 * ZADATAK 24011130 - 24011130
 * Sa tastature učitati elemente niza. Napisati funkcija koja treba odstarni sve elemente niza manje od praga učitanog sa tastature...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011130.htm
 */

#include <stdio.h>
#include <stdlib.h>

void odstrani(float A[],int n,float prag,int *br)
{
*br=0;
for(int i=0; i < n; i++)
while(A[i]0)
{
for(int j=i; j < n-1; j++)
A[j]=A[j+1];
n--;
(*br)++;
}
}
int main()
{
int N,M;
scanf("%d", &N);
float a[N];
for(int i=0; i < N; i++)
scanf("%f", &a[i]);
float granica;
scanf("%f", &granica);
odstrani(a,N,granica,&M);
for(int i=0; i < N-M; i++)
printf("%.2f ", a[i]);
return 0;
}