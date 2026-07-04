#include <iostream>
using namespace std;
// factorial of 0 is 1 and 
// factorial of 1 is 1 
int factorial(int a ){
    int fact =1;
    for (int i=1;i<=a;i++){
        fact=fact*i; 
    }
    cout<<"the factorial of the number "<<a<<" is "<<fact<<endl;
    return fact ;
}

int main (){
   factorial(0);
   factorial(1);
   factorial(2);
   factorial(3);
   factorial(4);
   factorial(5);

    return 0;
}