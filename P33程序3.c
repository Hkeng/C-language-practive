#include<stdio.h>
main()
{float x,y;
printf("请输入个人收入：");
scanf("%f",&x);
if(x<=800)
  y=0;
if(x>800&&x<=2000)
  y=(x-800)*0.05;
if(x>2000&&x<=8000)
  y=1200*0.05+(x-2000)*0.1;
if(x>8000)
  y=1200*0.05+6000*0.1+(x-8000)*0.2;
printf("应收税款:%.2f\n",y);

}