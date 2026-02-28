/*
 * ZADATAK 24011110 - 24011110
 * Sa tastature učitati dva niza. Napuniti funkciju koja treba da kao rezultat vrati broj elemenata koji se javljaju kao zajednički elementi i u jednom i u drugom nizu...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011110.htm
 */

#include <stdio.h>
#include <stdlib.h>

int zajednicki(int N1[],int C1,int N2[],int C2)
{
int brojac=0;
for(int i=0; i < C1; i++)
for(int j=0; j < C2; j++)
if(N1[i]==N2[j])
brojac ++;
return brojac;
}
int main()
{
int n,m,br;
scanf("%d", &n);
scanf("%d", &m);
int niz1[n],niz2[m];
for(int i=0; i < n; i++)
scanf("%d", &niz1[i]);
for(int i=0; i < m; i++)
scanf("%d", &niz2[i]);
br=zajednicki(niz1,n,niz2,m);
printf("Broj zajednickih elemenata je:%d", br);
return 0;
}