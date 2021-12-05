#include <iostream>
using namespace std;

//Output
// 12345
// 12345
// 12345
// 12345
// 12345

int main() {
  int n;
  cin>>n;

  int i = 1;

  while(i<=n){
    int j = 1;
    while(j<=n){
      cout<<j;
      j++;
    }
    cout<<endl;
    i++;

  }


} 