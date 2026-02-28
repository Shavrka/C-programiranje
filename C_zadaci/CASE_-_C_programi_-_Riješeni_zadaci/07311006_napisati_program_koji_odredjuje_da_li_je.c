/*
 * ZADATAK 15 - 07311006
 * Napisati program koji odredjuje da li je zadani znak veliko ili malo slovo ili cifra, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311006.htm
 */

#include <stdio.h>

int main() {
char znak;

printf("Vas znak: ");
scanf("%c", &znak);

switch(znak) {
case 'A' ... 'Z':
printf("Veliko sovo");
break;
case 'a' ... 'z':
printf("Malo sovo");
break;
case '0' ... '9':
printf("Cifra");
break;
default:
printf("Greska");
break;
}
return 0;
}

II varijanta sa if-else
//07311006
#include <stdio.h>

int main() {
char a;
printf("Veliko ili malo slovo\nSlovo(a)\n");
scanf("%c",&a);

if ((a>=65) && (a<=90))
{
printf("Veliko slovo\n");
}

else if ((a>=97)&& (a<=122))
{
printf("Malo slovo\n");
}

else if ((a>=48)&&(a<=57))
{
printf("Cifra\n");
}

return 0;
}