#include<stdio.h>
#define ll long long
#define N 100005
int main(){
    ll n,i=2;
    int k;
    scanf("%lld",&n);
    printf("1 ");
    while(n!=1){
        k=0;
        while(n%i==0){
            n/=i;
            k=1;
        }
        if(k==1) printf("%lld ",i);
        i++;
    }
}
