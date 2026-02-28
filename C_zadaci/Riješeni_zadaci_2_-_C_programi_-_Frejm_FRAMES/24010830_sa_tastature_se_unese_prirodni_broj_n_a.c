/*
 * ZADATAK 24010830 - 24010830
 * Sa tastature se unese prirodni broj n, a zatim na se ekran ispisuje vrijednost broja n prikazanog u binarnom zapisu...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010830.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int n;
int a[32]= {0}, i=0, j, p;
scanf("%d", &n);
do
{
p=n%2;
a[i]=p;
n/=2;
i++;
}
while(n!=0);
for(j=31; j>=0; j--)
if(a[j]!=0)
break;
for(j; j>=0; j--)
printf("%d", a[j]);

return 0;
}