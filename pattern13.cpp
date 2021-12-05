#include <iostream>
using namespace std;

//output
//    *
//   **
//  ***
// ****

int main() {
   //code goes here

   int n;
   cin>>n;

   int row = 1;

   while(row<=n){
       //Print space
       int space = n - row;
       while(space){
           cout<<" ";
           space--;
       }
       //Print Start
       int col = 1;
       while(col<=row){
           cout<<"*";
           col++;
       }
       cout<<endl;
       row++;


   }

    return 0;
}