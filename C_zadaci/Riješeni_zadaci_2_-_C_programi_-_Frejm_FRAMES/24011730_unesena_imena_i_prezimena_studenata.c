/*
 * ZADATAK 24011730 - 24011730
 * Unesena imena i prezimena studenata ... ispisati u sortiranom poretku ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011730.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
char st[10][30];
int n;
scanf("%d", &n);
getchar();
for(int i=0; i < n; i++)
gets(st[i]);
for(int i=0; i < n-1; i++)
{
char *min=st[i];
for(int j=i+1; j < n; j++)
{
if(strcmp(st[j],min) < 0)
min=st[j];
}
char pom[30];
strcpy(pom,st[i]);
strcpy(st[i],min);
strcpy(min,pom);
}
printf("\n");
for(int i=0; i < n; i++)
printf("%s\n", st[i]);
return 0;
}