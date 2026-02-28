/*
 * ZADATAK 24010540 - 24010540
 * Sa tastature prvo unese  rečenica, koju zatim program ispisuje istu rečenicu šifriranu Cezarovom šifrom.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010540.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
char x;
while(scanf("%c",&x), x!='\n')
{
if((x>='A'&&x<'X')||(x>='a'&&x<'x'))
printf("%c", (char)(3+toupper(x)));
else if(x=='X'||x=='Y'||x=='Z'||x=='x'||x=='y'||x=='z')
printf("%c", (char)(toupper(x)-23));
else
printf("%c", (char)toupper(x));
}
return 0;
}