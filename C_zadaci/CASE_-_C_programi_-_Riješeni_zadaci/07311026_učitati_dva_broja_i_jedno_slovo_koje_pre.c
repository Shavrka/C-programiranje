/*
 * ZADATAK 33 - 07311026
 * Učitati dva broja i jedno slovo koje predstavlja izbor aritmetičke operacije.s - sabiranjeo - oduzimanjem - množenjed - dijeljenje.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311026.htm
 */

#include <stdio.h>

int main() {
int a,b,c;
float r;
char o;
printf("Kalkulator\n");
printf("1. broj: ");
scanf("%d",&a);
printf("Operacija (s o m d): ");
scanf(" %c",&o);//Obratiti paznju na razmak za karaktere
printf("2. broj: ");
scanf("%d",&b);
switch(o)
{
case 's':
c=a+b;
printf("%d",c);
break;
case 'o':
c=a-b;
printf("%d",c);
break;
case 'm':
c=a*b;
printf("%d",c);
break;
case 'd':
if (b != 0)
printf("a / b =  %f", (float) a / b);
else
printf("Dijeljenje sa nulom");
break;
default:
printf("Nevalidan operator");
break;
}
return 0;
}