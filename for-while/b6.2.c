#include<stdio.h>
#define ll long long
int main(){
    ll a,sum=1;
    scanf("%lld",&a);
    for(ll i=2;i<=a/2;i++){
        if(a%i==0) sum+=i;
    }
    if(sum==a) printf("yes");
    else printf("no");
    return 0;
}
