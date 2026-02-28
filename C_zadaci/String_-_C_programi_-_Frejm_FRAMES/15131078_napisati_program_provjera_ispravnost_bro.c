/*
 * ZADATAK 15131078 - 15131078
 * Napisati program provjera ispravnost broja otvorenih i zatvorenih zagrada. Test primjeri: (()()),  )()), ())).
 * Kategorija: String - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/150c/15131078.htm
 */

#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
char input[100];

printf("Unesite zagrade:\n");
scanf("%s",input);

int br=0;

for(int i=0; i < strlen(input); i++){
if(input[i]=='(')
br=br+1;
if(input[i]==')')
br=br-1;
if(br < 0){
printf("Nije dobro\n");
break;
}
}
if(br==0)
printf("Imamo jednak broj zagrada");

return 0;
}