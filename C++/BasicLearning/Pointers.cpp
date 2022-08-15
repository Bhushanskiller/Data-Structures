#include <iostream>

using namespace std;

int main()
{
    int m=100;
    int *p;
    p=&m;
    cout<<"Address location => "<<p<<endl;
    cout<<"Dereferencing pointer by access and manipulating data using * symbol => "<<*p<<endl;

    int F[5]={2,3,4,5};
    int *pointer;
    pointer= F;
    for(int i=0;i<4;i++)
    {
        cout<<pointer[i]<<endl;
        cout<<F[i]<<endl;
    }
pointer= &F[3];
cout<<"F[3] with ampersand pointer address "<<pointer<<endl;
cout<<"F[3] with ampersand data stored in address by using dereferencing * symbol =>"<<*pointer<<endl;
cout<<"----------------------------------------------------------------"<<endl;
    int *newPointer;

    cout<<"Adding data in heap "<<endl;
    newPointer = new int[4]; //No need for ampersand sign for array use it iff you need to access it in newPointer = &n[0];
    newPointer[0]=12;
    newPointer[1]=13;
    newPointer[2]=14;
    newPointer[3]=15;
    for(int i=0;i<4;i++)
    {
        cout<<newPointer[i]<<endl;
    }


cout<<"------------------------------------------------------"<<endl;

    int px;
    double o;
    float i;
    char x;

    cout<<"int"<<sizeof(px)<<endl;
    cout<<"double"<<sizeof(o)<<endl;
    cout<<"float"<<sizeof(i)<<endl;
    cout<<"char"<<sizeof(x)<<endl;

    char y[5];
    cout<<"Array y"<<sizeof(y)<<endl;

     struct Rectangles
    {

       int l[4];
       int b;


    }r2;

    cout<<"Struct size "<<sizeof(r2)<<endl;




cout<<"------------------------------------------------------"<<endl;

    struct Rectangle
    {
       int l;
       int b;
       char a;
    }r1;
    cout<<"Struct size "<<sizeof(r1)<<endl;
    cout << "Hello world!" << endl;
    cout<<"Pointers are address of the data stored in a variable"<<endl;
    int a;
    char b;
    char d[8];
    int e[2];


    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;

    return 0;
}
