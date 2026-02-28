/*
 * ZADATAK 24010330 - 24010330
 * Sa tastature se unese riječ od 5 slova, a program treba da istu riječ ispiše naopačke.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010330.htm
 */

#include <stdlib.h>
#include <string.h>

int main()
{
char rijec[6]= {0};
do
{
printf("Unesite rijec od 5 slova:");
scanf("%s",&rijec);
}
while(strlen(rijec)!=5);
int d=strlen(rijec)-1;
for(int i=d; i>=0; i--)
printf("%c",rijec[i]);
return 0;
}