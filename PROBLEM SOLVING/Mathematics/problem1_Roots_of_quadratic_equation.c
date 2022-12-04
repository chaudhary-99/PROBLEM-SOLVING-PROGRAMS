#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=((b*b)-(4*a*c));
    printf("%d\n",d);
    if(d==0){
        printf("Real and Equal\n");
        float r1=((-1)*b*1.0)/(2*a);
        printf("%2.0f %2.0f\n",r1,r1);
    }
    else if(d>0){
        printf("Real and distinct\n");
        double d2=sqrt((d));
        printf("%lf\n",d2);
        float r1=((-1.0*b)+(d2))/(2*a);
        float r2=((-1.0*b)-(d2))/(2*a);
        printf("%0.2f %0.2f\n",r1,r2);
    }
    else{
       printf("Imaginary and Distinct\n");
       float d2=sqrt(-1*d);
       printf("%lf\n",d2);
       float r1_i=(d2)/(2*a);
       float r1_r=(-1.0*b)/(2*a);
       float r2_r=(-1.0*b)/(2*a);
       float r2_i=(d2)/(2*a);
       printf("%0.2f %0.2fi\n",r1_r,r1_i);
       printf("%0.2f %0.2fi\n",r2_r,r2_i);
    }

    return 0;
}