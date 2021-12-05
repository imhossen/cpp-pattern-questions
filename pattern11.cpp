#include <iostream>
using namespace std;

// output 
// A
// BB
// CCC

int main() {
   //code goes here
   int n;
   cin>>n;

   char row = 1;

   while(row<=n){
       int j = 1;
       while(j<=row){
           char ch = 'A' + row - 1;
           cout<<ch;
           j++;
       }
       cout<<endl;
       row++;
   }

    return 0;
}