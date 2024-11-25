# include<stdio.h>
#include<math.h>

void simpleInterest();
void compoundInterest();

int main(){
    simpleInterest();
    compoundInterest();
    
}

void simpleInterest(){
    float p,r,SI; //principle, time, rate
    int t;
    printf("enter principle amount: ");
    scanf("%f",&p);
    printf("enter time period: ");
    scanf("%d",&t);
    printf("enter rate of intrest: ");
    scanf("%f",&r);
    SI = p*t*r/100;
    printf("simple intrest is %f \n",SI);
}

void compoundInterest(){

    printf("enter input for compound interest...\n");

    float p,r,CI,A; //principle, time, rate, A = total amount(intrest+principle)
    int n;
    printf("enter principle amount: ");
    scanf("%f",&p);
    printf("enter time period: ");
    scanf("%d",&n);
    printf("enter rate of intrest: ");
    scanf("%f",&r);
    A = p* pow(1 + (r/100),n);
    CI = A - p;
    printf("compound intrest is %f",CI);

}