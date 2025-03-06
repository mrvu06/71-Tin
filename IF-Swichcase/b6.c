#include<stdio.h>
int main(){
    double a,b,c,d,e,f,x,y;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    //printf("%lf %lf %lf %lf %lf %lf", a,b,c,d,e,f);
    if(a/d==b/e && a/d==c/f){
        printf("vo so nghiem");
        return 0;
    }
    if(a/d==b/e && a/d!=c/f){
        printf("vo nghiem");
        return 0;
    }
    x=(c*e-b*f)/(a*e-d*b);
    y=(c*d-a*f)/(b*d-a*e);
    printf("x = %lf\ny = %lf",x,y);
    return 0;

}
