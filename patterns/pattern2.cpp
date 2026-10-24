#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1; // row - i , column - j
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << j << " "; // for reverse n - j + 1
            j += 1;    }
        i =i + 1;
        cout << endl ;
    }
}