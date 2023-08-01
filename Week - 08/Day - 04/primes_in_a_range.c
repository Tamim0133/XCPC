#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a ,&b);
    int flag =0;
    for(int i=2;i<b;i++){
        if(a == 1)
        { a++;i = 1;}
        else if(a%i==0 && i!=a){
            // printf("%d eikhane ashchi\n", i);
            i=1;
            a++;
        }
        else if(i==a){
            if(!flag){
            printf("%d ",a);flag = 1;}
            else
            printf(" %d", a);
            i=1;
            a++;
        }
    }
}