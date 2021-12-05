#include <iostream>
using namespace std;

int main() {
    float f;
    float c;
    cout<<"Please enter fahrenheit : "<<endl;
    cin>>f;

    c = ((f-32)*5) / 9;

    cout<<c<<"Celsius";
    return 0;
}