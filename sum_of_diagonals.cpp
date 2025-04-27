#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    
    //left to right diagonal
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(i==j)
            sum+=a[i][j];
    cout<<sum<<endl;

    //right to left diagonal
    for(int i=0;i<3;i++)
        for(int j=2;j>=0;j--)
            if(i+j==2)
            sum+=a[i][j];
    cout<<sum<<endl;
}