#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("thang %d nam %d co 31 ngay",a,b);
        return 0;
    }
    if(a==2){
        if(b%4==0) printf("thang %d nam %d co 29 ngay",a,b);
        else printf("thang %d nam %d co 28 ngay",a,b);
        return 0;
    }
    printf("thang %d nam %d co 30 ngay",a,b);
    return 0;

}
