#include<iostream>
using namespace std;
void printcol(int arr[][4],int row,int col,int target){
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    if(arr[i][j]==target)
    cout<<arr[i][j];
}
int main(){
    int arr[3][4]={1,2 ,3,4 ,5,6,7,8,9,10,11,12};
    int row,col,target;
    cout<<"enter the row ,col and target"<<endl;
    cin>>row>>col>>target;
    printcol(arr,row,col,target);
}