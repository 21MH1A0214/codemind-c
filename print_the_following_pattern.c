#include<stdio.h>
int main()
{
  int r,o,i,p;
  scanf("%d",&r);
  for(o=r;o>=1;o--)
  {
    for(i=r;i>=1;i--)
    printf("%d ",i);
    printf("
");
  }
}