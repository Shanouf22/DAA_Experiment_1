#include<stdio.h>
#include<math.h>

//utility functions
double factorial(double n){
    if(n<=1)
        return 1;
    return n*factorial(n-1);
}

double func1(double x){
    return pow(1.5,x);
}

double func2(double x){
    return pow(x,3);   
}

double func3(double x){
    return log(log(x));   
}

double func4(double x){
    return log(factorial(x))/log(2);   
}

double func5(double x){
    return exp(x);   
}

double func6(double x){
    return log(log(x)/log(2))/log(2);   
}

double func7(double x){
    return x;   
}

double func8(double x){
    return pow(2,pow(2,x));   
}

double func9(double x){
    return x*pow(2,x);   
}

double func10(double x){
    return log(x)/log(2);   
}

double func11(double x){
    return factorial(x);
}

void main(){
    for(double i=150; i<=200; i++){
        printf("%.0lf\t%.2lf\n",i,func11(i));
    }
}