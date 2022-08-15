#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //Can be declared outside of function for global use or even inside function
    struct Rectangle
    {
        int length; //4 bytes
        int breadth; //4 bytes
    } r1;
    cout<<sizeof(r1)<<endl;
    //8 bytes

     struct Rectangle2
    {
        int length; //4 bytes
        int breadth; //4 bytes
        char a[5]; //a[1]4 bytes a[2]4 bytes a[3]4 bytes a[4]4 bytes '+' a[5]4 bytes a[6]4 bytes
    } r2;
    cout<<sizeof(r2)<<endl;
    //12 bytes
    return 0;
}

