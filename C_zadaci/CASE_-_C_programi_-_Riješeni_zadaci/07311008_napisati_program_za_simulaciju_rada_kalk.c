/*
 * ZADATAK 35 - 07311008
 * Napisati program za simulaciju rada kalkulatora, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311008.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
int a,b,c;
char o;
printf("Kalkulator\n");
printf("Broj 1:");
scanf("%d",&a);
printf("Operacija (+ - * /):");
scanf(" %c",&o);//Obratiti paznju na razmak za karaktere
printf("Broj 2:");
scanf("%d",&b);
switch(o)
{
case '+':
c=a+b;
printf("%d",c);
break;
case '-':
c=a-b;
printf("%d",c);
break;
case '*':
c=a*b;
printf("%d",c);
break;
case '/':
c=a/b;
printf("%d",c);
break;
default:
printf("Nevalidan operator");
break;

}
return 0;
}