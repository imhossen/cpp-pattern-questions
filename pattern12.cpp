#include <iostream>
using namespace std;

// output 
// D
// CD
// BCD
// ABCD

int main() {
   //code goes here
   int n;
   cin>> n;

   int row = 1;

   while(row<=n){
       int col = 1;
       char ch = 'A' + n - row;
       while(col<=row){
           cout<<ch;
           ch++;
           col++;
       }
       cout<<endl;
       row++;
   }

    return 0;
}