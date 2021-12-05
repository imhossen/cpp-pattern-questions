#include <iostream>
using namespace std;

// Output
// 1
// 23
// 345
// 4567
// 56789

int main() {
  int n;
  cin>>n;

  int row =1;

  while(row<=n){
    int value = row;
    int j = 1;
    while(j<=row){
      cout<<value;
      j++;
      value++;
    }
    cout<<endl;
    row++;

  }
} 