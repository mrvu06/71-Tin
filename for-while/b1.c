#include<stdio.h>
int main(){
    long long sum=0,i=0;
    while(i<10){
        i++;
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    printf("%ld",sum);
    return 0;
}
