// //Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input =
// ‘c’, return value =
// ‘d’
// Note : for ch = ‘z’, return ‘a’.
#include <iostream>
using namespace std;

char nextChar(char ch ){
    if(ch=='z'){
        cout<<'a'<<endl;
        return 'a';

    }
    else{
        ch=ch+1;
        cout<<ch<<endl;
        return ch;

    }

}

int main (){
    nextChar('z');
    nextChar('a');
    nextChar('f');
    nextChar('y');
    
    return 0;
}