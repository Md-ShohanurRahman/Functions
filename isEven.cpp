#include <iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main (){
    cout<<isEven(5) <<endl;
    cout<<isEven(6) <<endl;
    return 0;
}