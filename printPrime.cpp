// print all the number from 2 to n 
#include <iostream>
using namespace std;

bool isPrime(int n){
    bool prime =true;
    if(n==1){
        return false;
    }
for (int i=2; i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}

void printPrimeNum(int n ){
    for(int i=2; i<=n;i++){
        if (isPrime(i)==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}



int main (){
   
  printPrimeNum(1);
//   printPrimeNum(50);
//   printPrimeNum(100);


    return 0;
}