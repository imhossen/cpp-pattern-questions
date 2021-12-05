#include <iostream>
using namespace std;

// Output 
// ABC
// DEF
// GHI

int main() {
   //code goes here

   int n;
   cin>>n;

   int row = 1;
    char start = 'A';
   while(row <=n){
       int j = 1;
       
       int value = 1;
       while(j<=n){
          
           cout<<start;
           j++;
           start++;
       }
       cout<<endl;
       row++;
   }

    return 0;
}