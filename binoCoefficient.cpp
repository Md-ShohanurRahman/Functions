#include <iostream>
using namespace std;

int factorial(int a ){
    int fact =1 ;
    for(int i=1;i<=a;i++){
        fact =fact*i;
    }
   return fact;
}
int bionomialCoefficient(int n,int r){
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);
    int biCoeff = val1/(val2*val3);
    return biCoeff;

}

int main (){
    cout<<bionomialCoefficient(4,2)<<endl;
    cout<<bionomialCoefficient(3,2)<<endl;
    return 0;
}