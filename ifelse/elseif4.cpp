#include<iostream>
using namespace std;

int main(){
    char ch ;
    cout << "enter the character ";
    cin >> ch;
    if(ch >= 65 and ch <= 90 ){
        cout << "the alphabet is upper case";
    }
    else if(ch >= 97 and ch <= 122  ){
        cout << "the alphabet is lower case";
    }
    else if(ch >= 0 and ch <=9){
        cout << "the character is numerical";
    }
}