#include <iostream>
using namespace std;

//output
// ****
//  ***
//   **
//    *

int main() {
   //code goes here

   int n;
   cin>>n;

   int row = 0;

   while(row<=n){
       int space = 1;
       while(space <= row){
           cout<<" ";
           space++;
       }
       int star = n - row;
       while(star){
           cout<<"*";
           star--;
       }
       
       cout<<endl;
       row++;

   }

    return 0;
}