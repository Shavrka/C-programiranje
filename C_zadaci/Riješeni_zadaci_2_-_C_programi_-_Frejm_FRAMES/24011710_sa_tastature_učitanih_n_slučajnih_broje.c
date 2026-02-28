/*
 * ZADATAK 24011710 - 24011710
 * Sa tastature  učitanih n slučajnih brojeva i sortirati u opadajući poredak BubbleSort postupkom...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011710.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generirajniz(int *p1,int *p2,int a,int b)
{
while(p1 < p2)
{
*p1=a+rand()%(b-a+1);
p1++;
}
}
void sortniz(int *p,int *k)
{
bool t=true;
for(int *r=p,j=0; r < k-1&&t r++,j++)
{
t=false;
for(int *i=p; i < k-1-j; i++)
{
if(*i < *(i+1))
{
int a=*i;
*i=*(i+1);
*(i+1)=a;
t=true;
}
}
}
}
void ispisiniz(int *p,int *k)
{
for(int *i=p; i < k; i++)
printf("%d ", *i);
}

int main()
{
srand(time(0));
int Niz[50],n,a,b;
scanf("%d", &n);
scanf("%d", &a);
scanf("%d", &b);
generirajniz(Niz,Niz+n,a,b);
ispisiniz(Niz,Niz+n);
long int t;
t=time(0);
sortniz(Niz,Niz+n);
t=time(0)-t;
printf("\n");
ispisiniz(Niz,Niz+n);
printf("vrijeme:%ld", t);
return 0;
}