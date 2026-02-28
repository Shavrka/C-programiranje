/*
 * ZADATAK 24011450 - 24011450
 * Napisati program koji traži od korisnika da unese niz riječi (broj riječi se prethodno unosi sa tastature), a zatim ispisuje na ekran prvu i poslednju riječ iz spiska po abecednom poretku...Program realizirati korištenjem klasičnih dvodimenzionalnih nizova znakova, i funkcija iz biblioteke “cstring”.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011450.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
char rijeci[20][20],pom[20][20];
int n,j=0;
scanf("%d", &n);
getchar();
while(j < n)
{
gets(rijeci[j]);
j++;
}
printf("\n");
j=0;
while(j < n)
{
strcpy(pom[j], rijeci[j]);
j++;
}
j=1;
while(j < n)
{
if(strcmp(pom[0],rijeci[j])>0)
strcpy(pom[0],rijeci[j]);
j++;
}
j=0;
while(j < n)
{
if(strcmp(rijeci[j],pom[1])>0)
strcpy(pom[1],rijeci[j]);
j++;
}
printf("%s\n%s\n", pom[0],pom[1]);
printf("\n");
bool t;
j=1;
int i=0,k;
while((n+1)/(i+1))
{
t=true;
k=0;
while((j+1)/(k+1))
{
if(strcmp(pom[k],rijeci[i])==0)
{
t=false;
break;
}
k++;
}
if(t)
{
strcpy(pom[++j],rijeci[i]);
printf("%s\n", pom[j]);
}
i++;
}
return 0;
}