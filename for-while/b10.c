#include <stdio.h>
#define N 100005
int n,f[N];
int fibonacy(int a){
    if(a==1||a==2) return 1;
    return fibonacy(a-1)+fibonacy(a-2);
}
int main(){
    scanf("%d",&n);
    printf("%d",fibonacy(n));
}
