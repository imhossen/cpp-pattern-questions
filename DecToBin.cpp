#include <iostream>
#include<math.h>
using namespace std;

int main() {
   //code goes here
   int n;
   cin>>n;

   int i = 0;
   int ans = 0;

   while(n !=0){
       cout<<n;
       int bit = n & 1;
       cout<<"The Bit is: "<<bit<<endl;
       ans = (bit * pow(10, i)) + ans;
        cout<<"Ans is: "<<ans<<endl;
       n = n >> 1;
       cout<<"The N is: "<<n<<endl;
       i++;
   }
   cout<<"The answer is: "<<ans<<endl;

   
}