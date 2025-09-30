// Question 4 : Write a function that prints the largest of 3 numbers.
#include <iostream>
using namespace std;
int maxNum(int a ,int b,int c ){
    if ((a>b)&&(a>c)){
        cout<<a<<" is the largest number "<<endl;
        return a;
    }
    else if ((b>a)&&(b>c)){
        cout<<b<<" is the largest number "<<endl;
        return b;
    }
    else{
        cout<<c<<" is the largest number "<<endl;
        return c;
    }
    }

    
int main (){
    maxNum(1,2,3);
    maxNum(4,5,6);

    return 0;
}