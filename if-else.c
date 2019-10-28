#include<stdio.h>
int main(void)
{
    int t;
    int y;
    printf("Enter t(t>0):\n");
    scanf("%f",&t);
    if(t<10){
        y=1.0/2*10*t*t;
    }
    else{
        y=3000-(1.0/2*10*t*t);
    }
    printf("the y is %d\n",t,y);
    return  0;
    }