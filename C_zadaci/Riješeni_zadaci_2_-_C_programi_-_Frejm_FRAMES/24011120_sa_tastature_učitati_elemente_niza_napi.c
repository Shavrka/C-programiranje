/*
 * ZADATAK 24011120 - 24011120
 * Sa tastature učitati elemente niza. Napisati funkcija koja treba da pronađu dva najmanja elementa niza...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011120.htm
 */

#include <stdio.h>
#include <stdlib.h>

int izdvajanje(int A[],int N,int* prvi,int* drugi)
{
*prvi=A[0];
for(int i=1; i < N; i++)
if(A[i] < *prvi)
*prvi = A[i];
*drugi=A[0];
for(int i=1; i < N; i++)
if(A[i]>*drugi)
*drugi=A[i];
for(int i=0; i < N; i++)
if(A[i] > *prvi && A[i] < *drugi)
*drugi=A[i];

}
int main()
{
int n;
scanf("%d", &n);
int niz[n];
for(int i=0; i < n; i++)
scanf("%d", &niz[i]);
int br1,br2;
izdvajanje(niz,n,&br1,&br2);
printf("%d %d", br1, br2);
return 0;
}