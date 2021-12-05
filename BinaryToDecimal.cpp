#include <iostream>
#include<math.h>
using namespace std;

int main() {
   //code goes here
    int n;
    cin>>n;

    int i = 0, ans = 0;
    while(n != 0){
        int digit  = n % 10;
        cout<<"Bit are "<<digit<<endl;

        if (digit == 1){
            ans = ans + pow(2, i);
            cout<<ans<<endl;
        }
        n = n/10;
        cout<<"N are"<<n<<endl;
        i++;
    }
    cout<<ans<<endl;
   

    return 0;
}