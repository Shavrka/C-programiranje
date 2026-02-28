/*
 * ZADATAK 24010640 - 24010640
 * Sa tastature učitati 6 brojeva. Program treba da ispita i ispiše da li su svi uneseni brojevi pozitivni, i da li među njima ima neparnih brojeva. Za realizaciju programa ne koristiti nizove.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010640.htm
 */

#include <stdlib.h>
#include <string.h>

int main()
{
bool paran=true;
bool pozitivan=true;
int a;
for(int i=1; i<=6; i++)
{
scanf("%d",&a);
if(a < 0)
pozitivan=false;
if(a%2!=0)
paran=false;
}
if(pozitivan==true)
printf("Svi brojevi su pozitivni.\n");
else
printf("Postoje negativni brojevi.\n");
if(paran==true)
printf("Svi brojevi su parni.\n");
else
printf("Postoje neparni brojevi.\n");

return 0;
}