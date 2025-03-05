#include<stdio.h>
#define ll long long
int main(){
    double n,sum;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++) sum+=1.0/i;
    printf("%lf",sum);
    return 0;
}
