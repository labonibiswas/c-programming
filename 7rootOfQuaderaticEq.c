# include<stdio.h>
#include<math.h>
int main(){
    //quaderative eq. = ax^2+bX+c = 0, a!=0
    //(discriminant)D=b^2-4ac
    //root=(-b+-(D)^1/2)/2a , when D>0
    //root=-b/2a, when D==0
    //root= -b/2a +- i((D)^1/2)/2a, when D<0

    float a,b,c,D,r1,r2,r,realPart, imaginaryPart; //D = discriminent, ir = imaginary root
    printf("enter coefficient A, B and C : ");
    scanf("%f%f%f",&a,&b,&c);
    D = 4*a*c;
    printf("disciminent is %f \n",D);
    if(D>0){
        printf("real and distinct roots \n");
        r1= (-b + sqrt(D))/2*a;
        r2= (-b - sqrt(D))/2*a;
        printf("root1 = %f \n",r1);
        printf("root2 = %f \n",r2);
    }else if (D==0)
    {
        printf("real and equal roots.....\n");
        r = -b/2*a;
        printf("roots are %f, %f \n", r,r);
    }else{
        printf("roots complex...\n");
        realPart = -b/2*a;
        imaginaryPart = sqrt(-D)/2*a;
        printf(" complex roots are %f - %fi , %f + %fi \n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    

}