#include<stdio.h>
int main(){
    int a;
    printf("enter a number from 1 to 6: ");
    scanf("%d", &a);
    
    if(a==1){
        int b=1;
        while(b<=10){
            printf("%d ", b);
            b++;
        }
    }else if(a==2){
        int b=98;
        while(b>=67){
            printf("%d ", b);
            b--;
        }
    }else if(a==3){
        int b,c;
        printf("enter starting and ending number: ");
        scanf("%d %d", &b, &c);
        int x=b;
        while(x<=c){
            printf("%d ", x);
            x++;
        }
    }else if(a==4){
        int b=10;
        while(b>=1){
            printf("%d ", b);
            b--;
        }
    }else if(a==5){
        int b=67;
        while(b<=98){
            printf("%d ",b);
            b++;
        }
    }else if(a==6){
        int b,c;
        printf("enter starting and ending number: ");
        scanf("%d %d", &b, &c);
        int x=c;
        while(x>=b){
            printf("%d ", x);
            x--;
        }
    }else{
        printf("input mismatch");
    }
    return 0;
}