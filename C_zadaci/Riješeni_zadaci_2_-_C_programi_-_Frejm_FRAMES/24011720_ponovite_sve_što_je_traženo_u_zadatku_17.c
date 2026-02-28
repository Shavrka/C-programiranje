/*
 * ZADATAK 24011720 - 24011720
 * Ponovite sve što je traženo u zadatku 17.1, samo uz korištenje prvo InsertSort, a zatim i QuickSort postupka sa izborom slučajnog elementa kao pivota..
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011720.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
for(int *i=p; i < k-1; i++)
{
int a=*(i+1);
int *j;
for(j=i+1; j>p&&*(j-1) < a; j--)
*j=*(j-1);
*j=a;
}

}

void sortniz2(int *p,int *k)
{
if(p+1>=k)
return;
int pivot=*(p+rand()%(k-p));
int *l=p,*d=k-1;
while(l<=d)
{
while(*l > pivot)
l++;
while(*d < pivot)
d--;
if(l <= d)
{
int a=*l;
*l=*d;
*d=a;
l++;
d--;
}
}
sortniz2(p,d+1);
sortniz2(l,k);
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
sortniz2(Niz,Niz+n);
t=time(0)-t;
printf("\n");
ispisiniz(Niz,Niz+n);
printf("vrijeme:%ld", t);
return 0;
}