#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Array Size For Garbage Value check"<<endl;
    cin>>n;
    int Arr[n];
    Arr[0]=2;
    cout<<"For Check start"<<endl;

    for(int a=0;a<=4;a++)
    {
        cout<<Arr[a]<<endl;
    }
    cout<<"ForEach Check start"<<endl;
    for(int x:Arr)
    {
        cout<<"x=>"+x<<endl;
    }

    cout<<"-------------------------------------------------------------"<<endl;
    cout << "Hello world!" << endl;
    int A[]={1,2,4};
    cout<<sizeof A[2]<<endl;


    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }

    cout<<"----------------------------------------"<<endl;
    int B[10]={1,2,4};



    for(int i=0;i<11;i++)
    {
        cout<<B[i]<<endl;
    }

    cout<<"###################################### ANALYSIS FOR SECTION 2 : ARRAY BASICS ###########################################################"<<endl;
    cout<<"Array is a collection of similar data elements"<<endl;
    cout<<"Scenario 1"<<endl;
    cout<<"Empty Array is initialized int x[]={4,5,6};"<<endl;
    int x[]={4,5,6};
    cout<<"x[0]"<<x[0]<<endl;
    cout<<"x[1]"<<x[1]<<endl;
    cout<<"x[2]"<<x[2]<<endl;
    cout<<"x[3]"<<x[3]<<" Garbage value came as it was initialized with 3 blocks"<<endl;
    cout<<"x[4]"<<x[4]<<" Garbage value came as it was initialized with 3 blocks"<<endl;

    cout<<endl;
    cout<<"Scenario 2"<<endl;
    cout<<"Array is initialized with 5 blocks int y[]={4,5,6};"<<endl;
    int y[5]={4,5,6};
    cout<<"y[0]"<<y[0]<<endl;
    cout<<"y[1]"<<y[1]<<endl;
    cout<<"y[2]"<<y[2]<<endl;
    cout<<"y[3]"<<y[3]<<" 0 came as block is present with no data"<<endl;
    cout<<"y[4]"<<y[4]<<" 0 came as block is present with no data"<<endl;
    cout<<"y[5]"<<y[5]<<" Garbage value came as it was initialized with 5 blocks"<<endl;
    cout<<"y[6]"<<y[6]<<" Garbage value came as it was initialized with 5 blocks"<<endl;


    return 0;
}
