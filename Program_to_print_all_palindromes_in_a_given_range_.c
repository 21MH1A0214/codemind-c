#include<stdio.h>
int main(){
   int num, rem, reverse_num, temp, start, end;

  
   scanf("%d",&start);

   
   scanf("%d",&end);

   
   for(num=start;num<=end;num++){
      temp=num;
      reverse_num=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(num==reverse_num)
         printf("%d ",num);
   }
   return 0;
}