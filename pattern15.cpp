#include <iostream>
using namespace std;

int main() {
   //code goes here

   int n;
   cin>>n;

   int row =1;
 

   while(row<=n){
       
       int space = n - row + 1;
       while(space ){
           cout<<" ";
           space--;
       }
       int col = 1;
       while(col<= row){  
           cout<<row;
           col++;
       }
       
       cout<<endl;
       row++;
   }

    return 0;
}