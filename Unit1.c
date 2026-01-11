#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

float calc (float *z,float *o)
{
float y,x,g;
g=(*o*3.1415926535897932384)/180;
y=pow(pow(*z,5)*(1/cos(g))/((3-2* *z)*pow(*z,1.0/3)),2);
return y;
}
void main ()
{
float F,z,o;
char opc;
do{
  clrscr();
  gotoxy(10,10);
  printf("A- ingresar valores de la raiz a calcular");
  gotoxy(10,12);
  printf("B- Ver resultado de la raiz");
  opc=getch();
  clrscr();
  switch(opc)
  {
  case'A':
  printf("ingrese el valor de Z\n");
  scanf("%f",&z);
  clrscr();
  printf("ingrese el valor de tita\n");
  scanf("%f",&o);
  F=calc(&z,&o);
  getch();
  break;
  case 'B':
  printf ("El valor de Y es %.2f",F);
  getch();
  break;
  }
}while(opc!='C');
}

