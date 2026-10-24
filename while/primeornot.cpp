// logic - n = 5 is prme no. so we have to divide it from 2 to 4 which gives non zero remainder. 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int i=2;
    while(i < n){
        if(n % i == 0){
            cout << "the number is not prime\n";}
           // break;}
        else{
            cout << "prime for " << i << endl ;
        }
        i = i + 1;
        
    }
    
}