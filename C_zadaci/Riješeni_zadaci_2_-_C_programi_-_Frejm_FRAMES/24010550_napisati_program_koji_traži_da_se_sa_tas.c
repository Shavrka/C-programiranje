/*
 * ZADATAK 24010550 - 24010550
 * Napisati program koji traži da se sa tastature unese neki binarni broj, a koji nakon toga ispisuje isti broj pretvoren u dekadni brojni sistem. Na primjer, ukoliko se unese broj 1101011, rezultat treba da bude 107, jer je (1101011)2= (107)10...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010550.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int s=0;
int br, cif;
printf("Unesi binaran broj:");
scanf("%d", &br);
int p=1, a=br;

while(a!=0)
{
cif=a%10;
a=a/10;
if(cif!=0 && cif!=1)
{
printf("Unesi binaran broj:");
scanf("%d", &br);
a=br;
}
}
a=br;
while(a!=0)
{
cif=a%10;
a=a/10;
s=s+cif*p;
p=p*2;
}
printf("Binaran broj %d ima decimalnu vrijednost %d.", br, s);
return 0;
}