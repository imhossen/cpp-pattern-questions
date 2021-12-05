#include<iostream>
using namespace std;


int main() {

    int n ;
    cout<<" enter the value of n" <<endl;
    cin >> n;

    bool isPrime = 1 ;

    for(int i = 2; i<n; i++) {

        //rem = 0, Not a Prime
        if(n%i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        cout<<" Prime Number" << endl;
    }
    else{
        cout<<" Not a Prime Number" << endl;
    }


}