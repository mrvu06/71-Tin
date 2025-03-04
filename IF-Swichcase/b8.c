#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a){
        printf("loi");
        return 0;
    }
    if(a==b&&a==c){
        printf("deu");
        return 0;
    }
    if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a)){
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) printf("vuong can");
        else printf("can");
        return 0;
    }
    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) printf("vuong");
    else printf("thuong");
    return 0;


}
