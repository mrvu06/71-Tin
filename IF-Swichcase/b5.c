#include<stdio.h>
int main(){
    float a,b,c,x,denta;
    scanf("%f %f %f",&a, &b, &c);
    if(a==0){
        printf("%f",-c/b);
        return 0;
    }
    denta = b*b-4*a*c;
    if(denta == 0){
        printf("%f",-b/(2*a));
        return 0;
    }
    if(denta < 0){
        printf("vo nghiem");
        return 0;
    }
    denta = sqrt(denta);
    printf("%f\n%f",(-b+denta)/(2*a),(-b-denta)/(2*a));
    return 0;
}
