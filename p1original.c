#include<stdio.h>
void input(float*base,float*height)
{
  printf("enter the lenght of base:");
  scanf("%f" ,base);
  printf("enter the lenght of height:");
  scanf("%f" ,height);
}
void find_area(float base,float height,float *area)
{
  *area=((base*height)/2);
}
void output(float base,float height,float area)
{
  printf("area of traingle is %f * %f/2 is %f", base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
    
  return 0;
  }

