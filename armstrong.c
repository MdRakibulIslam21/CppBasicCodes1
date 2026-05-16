#include<stdio.h>

int main()

{
    int num,temp,r,sum=0,i;


    for(i=1;i<=1000;i++){

              temp= i;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum * 10+r*r*r;
        temp = temp/10;
    }
    if(sum==i){
            printf("%d",i);


    }
      sum=0;
    }

}

