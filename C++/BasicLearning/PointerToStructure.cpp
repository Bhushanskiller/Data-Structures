#include <iostream>

using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
};
int main()
{
    struct Rectangle r1={10,5};
    cout<<sizeof(r1)<<endl;


    cout<<"Normal variable Call"<<endl;
    cout<<r1.lenght<<endl;
    cout<<r1.breadth<<endl;

    cout<<"Dynamic memory allocation"<<endl;
    cout <<"Pointer to structure declaration -> struct Rectangle *p;"<<endl;

    struct Rectangle *p;
    cout<<"Object creation for C<[p = (struct Rectangle *)malloc(sizeof(struct Rectangle));]"<<endl;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    cout<<sizeof(p)<<endl;
    p->lenght=12;
    p->breadth=15;
    cout<<"Accessing members of Structure via pointer"<<endl;
cout<<p->lenght<<endl;
cout<<p->breadth<<endl;

    cout << "Hello world!" << endl;


//Output
//8
//Normal variable Call
//10
//5
//Dynamic memory allocation
//Pointer to structure declaration -> struct Rectangle *p;
//Object creation for C<[p = (struct Rectangle *)malloc(sizeof(struct Rectangle));]
//8
//Accessing members of Structure via pointer
//12
//15
//Hello world!
    return 0;
}
