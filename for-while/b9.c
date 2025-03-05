#include <stdio.h>
int main(){
    unsigned long long sum=1;
    float s,n;
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        sum*=i;
        s+=1.0/sum;
    }
    printf("%f",s);
    return 0;
}

