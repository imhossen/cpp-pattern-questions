#include <iostream>
using namespace std;

// Output
// 12345
// 12345
// 12345
// 12345
// 12345

int main() {
  int n;
  cin>>n;

  int row = 1;
  
  while(row <=n){
    int col = 1;
    while(col<=row){
      cout<<"*";
      col++;
    }
    cout<<endl;
    row++;
  }
} 