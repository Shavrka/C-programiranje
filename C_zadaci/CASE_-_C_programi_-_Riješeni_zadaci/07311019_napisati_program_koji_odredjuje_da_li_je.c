/*
 * ZADATAK 16 - 07311019
 * Napisati program koji odredjuje da li je zadani znak slovo, cifra ili specijalna znak, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311019.htm
 */

#include <stdio.h>

int main() {
char znak;

printf("Vas znak: ");
scanf("%c", &znak);

switch(znak) {
case 'A' ... 'Z': case 'a' ... 'z':
printf("Slovo");
break;
case '0' ... '9':
printf("Cifra");
break;
default:
printf("Specijalni znak");
break;
}
return 0;
}

II varijanta sa if-else
// 07311019
#include <stdio.h>

int main() {
int znak;

printf("Vas znak: ");
scanf("%c", &znak);

if((znak >= 65 && znak <= 90) || (znak >= 97 && znak <=122)) {
printf("Slovo");
}
else if(znak >= 48 && znak <= 57) {
printf("Cifra");
}
else if((znak>0 && znak<=47)||(znak>=58 && znak<=64)||(znak>=91 && znak<=96)||(znak>=123 && znak<=127)) {
printf("Specijalni znak");
}

return 0;
}