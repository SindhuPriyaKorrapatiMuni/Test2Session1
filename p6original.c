#include<stdio.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the values of x1,y1,x2,y2");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  float sqrt,temp,temp1;
  *area=(x2-x1)+(y2-y1);
  temp=(x2-x1)+(y2-y1);
  temp1=(*area)*(temp)/2;
  sqrt=temp1;
}
void output(float x1, float y1,float x2, float y2, float area)
{
  printf("distance between x1,y1 and x2,y2is:%f",area);
}
int main()
{
 float x1,y1,x2,y2,area;
 input(&x1,&y1,&x2,&y2);
 find_distance(x1,y1,x2,y2,&area);
 output(x1,y1,x2,y2,area);
 return 0;
}
