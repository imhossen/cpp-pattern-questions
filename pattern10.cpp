#include <iostream>
using namespace std;

// Output 
// ABC
// BCD
// CDE

int main() {
   //code goes here

   int n;
   cin>>n;

   int row = 1;

   while(row <=n){
       int j = 1;
       while(j<=n){
           char ch = 'A' + row + j - 2;
           cout<<ch;
           j++;
       }
       cout<<endl;
       row++;
   }

    return 0;
}