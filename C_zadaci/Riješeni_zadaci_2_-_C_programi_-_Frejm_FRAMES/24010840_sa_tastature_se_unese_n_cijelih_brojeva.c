/*
 * ZADATAK 24010840 - 24010840
 * Sa tastature se unese n cijelih brojeva (n se zadaje sa tastature), i nakon toga ispisuju se uneseni brojeve izostavljajući duplikate (tj. brojeve koji se ponavljaju).
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010840.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
unsigned int n;
scanf("%d", &n);
int brojac=0;
unsigned int a[n], b[n];
for(int i=0; i < n; i++)
{
scanf("%d", &a[i]);
b[i]=0;
}
for(int i=0; i < n; i++)
{
bool t=true;
for(int j=0; j < i; j++)
if(a[j]==a[i])
{
t=false;
b[i]=a[i];
break;
}
if(t)
printf("%d ", a[i]);
else
{
bool f=true;
for(int k=0; k < i; k++)
if(b[k]==b[i])
{
f=false;
break;
}
if(f)
brojac++;
}
}
if(brojac!=0)
printf("\n %d ponavljanja", brojac);
else
printf("\n\nNema brojeva koji se ponavljaju u unijetom nizu.");

return 0;
}