/*
 * ZADATAK 24011760 - 24011760
 * Za fiksan sortiranog niza od 50 elemenata i broja “n“ unesenog sa tastature postupkom binarne pretrage ispisati poziciju gdje se broj “n“ nalazi unutar niza ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011760.htm
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
void sortniz2(int *p,int *k)
{
if(p+1>=k)
return;
int pivot=*(p+rand()%(k-p));
int *l=p,*d=k-1;
while(l<=d)
{
while(*l>pivot)
l++;
while(*d < pivot)
d--;
if(l<=d)
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

int main()
{
srand(time(0));
int a[50];
int A,B;
scanf("%d", &A);
scanf("%d", &B);
generirajniz(a,a+50,A,B);
sortniz2(a,a+50);
int n;
scanf("%d", &n);
int l=0,d=49,s=-1,k=0;
while(l<=d)
{
int i=(l+d)/2;
if(a[i]==n)
{
k++;
s=i+1;
break;
}
else if(a[i] < n)
d=i-1;
else
l=i+1;
k++;
}
if(s!=-1)
printf("%d, %d", s, k);
else
printf("no!, %d", k);
return 0;
}