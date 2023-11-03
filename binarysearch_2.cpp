#include<iostream>
using namespace std;
int binarysearch(int arr[] ,int n,int key){
    int start=0,end=n-1,mid,first=-1,last=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            first=mid;
            start=mid+1;
            last=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}

int main(){
    int arr[1000];
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elemnts"<<endl;
    for(int i ;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"enter the key";
    cin>>key;
    cout<<binarysearch(arr,n,key);
}
