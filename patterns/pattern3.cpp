#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=4; // row - i , column - j
    while(i >= 1){
        int j = 4;
        while(j >= 1){
            cout << j << " "; 
            j -= 1;    }
        i -= 1;
        cout << endl ;
    }
}