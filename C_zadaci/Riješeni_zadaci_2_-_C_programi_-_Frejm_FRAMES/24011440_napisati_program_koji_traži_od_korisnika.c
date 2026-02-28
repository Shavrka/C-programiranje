/*
 * ZADATAK 24011440 - 24011440
 * Napisati program koji traži od korisnika da unese niz riječi (broj riječi se prethodno unosi sa tastature), a zatim ispisuje na ekran prvu i poslednju riječ iz spiska po abecednom poretku...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011440.htm
 */

#include
#include
#include
#include

int main()
{
const int c=20;
char rijeci[c][c],pom[c][c];
int n,i=0;
scanf("%d", &n);
while((n+1)/(i+1))
{
gets(rijeci[i]);
i++;
}
strcpy(pom[0],rijeci[n-1]);
i=1;
while(n/i)
{
if(strcmp(rijeci[i],pom[0]) < 0)
strcpy(pom[0],rijeci[i]);
i++;
}
strcpy(pom[1],pom[0]);
i=1;
while(n/i)
{
if(strcmp(pom[1],rijeci[i]) < 0)
strcpy(pom[1],rijeci[i]);
i++;
}
printf("\n");
for(int i=0; i < strlen(pom[0]); i++)
printf("%c", pom[0][i]);
printf("\n");
for(int i=0; i < strlen(pom[1]); i++)
printf("%c", pom[1][i]);
printf("\n");
i=1;
bool t;
for(int j=0; j <= n; j++)
{
t=true;
for(int k=0; k < i+1; k++)
{
if(strcmp(pom[k],rijeci[j])==0)
{
t=false;
break;
}
}
if(t)
{
strcpy(pom[++i],rijeci[j]);
for(int p=0; p < strlen(pom[i]); p++)
printf("%c", pom[i][p]);
printf("\n");
}
}
return 0;
}