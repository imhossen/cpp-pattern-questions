#include <iostream>
using namespace std;

// Output 
// 1
// 21
// 321

int main() {
  int n;
  cin>>n;

  int row = 1;

  while(row<=n){
      int j = 1;
      while (j<=row)
      {
          cout<<(row-j) + 1;
          j++;
      }
      cout<<endl;
      row++;
      
  }

    return 0;
}