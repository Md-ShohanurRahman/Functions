//Question 2 : Write a function to calculate the sum of digits of a number.
#include <iostream>
using namespace std;

int sumOfDigit (int n){
    int sum=0;
    while(n>0){
     int lastDigit=n%10;
      sum=sum+lastDigit;
      n=n/10;  
    }
    cout<<sum<<endl;
    return sum ;
}

    
int main (){
   sumOfDigit (12);
   sumOfDigit (121);
   sumOfDigit (999);
   sumOfDigit (123456789);
    return 0;
}