/*
 * ZADATAK 24011740 - 24011740
 * Sa tastature unjeti niz rečenica ...  Sortirati ih  u obrnuti abecedni poredak koristeći QuickSort postupak i ispisati ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011740.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d", &n);
getchar();
char **reci=(char**)malloc(n*sizeof(char*));
char pom[100];
for(int i=0; i < n; i++)
{
gets(pom);
reci[i]=(char*)malloc(strlen(pom)+1);
strcpy(reci[i],pom);
}
quick_sort(reci,0,n-1);
printf("\n");
for(int i=0; i < n; i++)
printf("%s\n", reci[i]);
for(int i=0; i < n; i++)
free(reci[i]);
free(reci);
return 0;
}