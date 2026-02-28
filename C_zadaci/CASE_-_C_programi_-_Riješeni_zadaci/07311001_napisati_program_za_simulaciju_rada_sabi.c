/*
 * ZADATAK 34 - 07311001
 * Napisati program za simulaciju rada sabiranja i oduzimanja.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311001.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
char op;
printf("Kalkulator\n");
printf("Brojevi (a b)");
scanf("%i",&a);
scanf("%i",&b);
printf("Operacija (+ -)");
scanf("%c",&op);
switch(op)
{
case '+':
printf("a+b=%i",a+b);
break;
case '-':
printf("a-b=%i",a-b);
break;
}
return 0;
}