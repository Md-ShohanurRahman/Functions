// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.
#include <iostream>
using namespace std;
int squareOfTwoNum(int a, int b ){
    int val1=a*a;
    int val2=b*b;
    int val3=2*a*b;
    int square= val1+val2+val3;
    cout<<square<<endl;
    return square;
}
int main (){
    squareOfTwoNum(1,0);
    squareOfTwoNum(1,1);
    squareOfTwoNum(1,2);
    squareOfTwoNum(1,3);
    return 0;
}