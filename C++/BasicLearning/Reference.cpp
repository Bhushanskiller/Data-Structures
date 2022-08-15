#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"Reference is an alias or nickname for the variable"<<endl;
    cout<<"Reference uses the same memory of the variable"<<endl;
    cout<<"Reference declaration is done by using ampersand"<<endl;
    int a=10;
    int &r = a;
    int b=35;
    r=b;
    cout<<"a and r will values will be reflected as 35"<<endl;
    cout<<a<<endl<<r<<endl;
    return 0;
}
