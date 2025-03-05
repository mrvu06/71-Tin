#include<stdio.h>
#include<stdbool.h>
#define ll long long
bool check(ll a){
    for(ll i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    ll a;
    scanf("%ld",&a);

    if(check(a)) printf("true");
    else printf("false");
    return 0;
}
