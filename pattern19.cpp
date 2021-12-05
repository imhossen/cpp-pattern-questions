#include <iostream>
using namespace std;

// output 
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main() {

   int n;
   cin>>n;

   int row =1;
 
   while(row<=n){
       
       
       int start = 1 ;
       while(start <=n - row + 1){
           cout<<start;
           start++;
       }

       int space = 3;
       while(space <=row *2){
           cout<<"*";
           space++;
       }
       
       int end = n - row + 1;
       while(end ){
           cout<<end;
           end--;
       }
       cout<<endl;
       row++;
   }

    return 0;
}