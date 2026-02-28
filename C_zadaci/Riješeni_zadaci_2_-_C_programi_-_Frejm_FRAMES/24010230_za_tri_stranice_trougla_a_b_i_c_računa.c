/*
 * ZADATAK 24010230 - 24010230
 * Za tri stranice trougla a, b i c računa i ispisuje površinu trougla P, kao i vrijednosti svih uglova trougla u stepenima.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010230.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b,c;
printf("a:");
scanf("%lf", &a);
printf("b:");
scanf("%lf", &b);
printf("c:");
scanf("%lf", &c);
double s=(a+b+c)/2;
double p=sqrt(s*(s-a)*(s-b)*(s-c));
double alfa,beta,gama;
alfa=180*acos((c*c+b*b-a*a)/(2*c*b))/PI;
beta=180*acos((a*a-b*b+c*c)/(2*a*c))/PI;
gama=180*acos((a*a+b*b-c*c)/(2*a*b))/PI;
printf("Povrsina trougla je:%0.2lf\n",p);
printf("alfa=%0.2lf, beta=%0.2lf, gama=%0.2lf", alfa, beta, gama);
return 0;
}