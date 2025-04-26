#include<iostream>
using namespace std;
int main()
{
    // int a[3][3]={1,2,3,4,5,6,7,8,9};

    /*
    ROW MAJOR
    index of element in memory space: index = row_index* total_column + col_index
    row index of matrix from memory index: row_index = index/total_column
    column index of matrix from memory index: column_index = index%total_column
    
    COLUMN MAJOR
    index of element in memory space: index = col_index* total_row + row_index
    column index of matrix from memory index: row_index = index/total_row
    row index of matrix from memory index: column_index = index%total_row
    */

    /*user input elements of 2D array*/
    // int arr[3][3];
    // for(int i=0;i<3;i++)
    // for(int j=0;j<3;j++)
    // cin>>arr[i][j];

    /*printing elements of 2D array*/
    // for(int i=0;i<3;i++)
    // for(int j=0;j<3;j++)
    // cout<<arr[i][j]<<" ";

    /*printing 2D array as matrix*/
    // for(int i=0;i<3;i++)
    // {
    // for(int j=0;j<3;j++)
    // cout<<a[i][j]<<" ";
    // cout<<endl;
    // }


    /*print 2D array row major wise*/
    // for(int i=0;i<3;i++)
    // for(int j=0;j<3;j++)
    // cout<<arr[i][j]<<" ";

    /*print 2D array column major wise*/
    // for(int j=0;j<3;j++)
    // for(int i=0;i<3;i++)
    // cout<<a[i][j]<<" ";

    /*Searching in 2D array*/
    // int target;
    // cin>>target;
    // for(int i=0;i<3;i++)
    // for(int j=0;j<3;j++)
    // if(a[i][j]==target)
    // cout<<"element found";

}