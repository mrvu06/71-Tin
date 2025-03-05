#include<stdio.h>
long long solve(long long x, long long y){
    long long n;
    if(x>y) n==y;
    else n==x;
    for(long long i=n;i>1;i--){
        if(x%i==0&&y%i==0) return i;
    }
    return 1;
}
int main(){
    long long a,b,res1,res2;
    scanf("%lld %lld",&a,&b);
    res1=solve(a,b);
    res2=a*b/res1;
    printf("%lld %lld",res1,res2);
    return 0;
}
