#include<stdio.h>
int main(){
    int n;
    unsigned long long res=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++) res*=i;
    printf("%llu",res);
    return 0;
}
