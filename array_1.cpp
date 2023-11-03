#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr);
    int search = 5;
    for(int i=0;i<6;i++){
       if(arr[i]==search){
        cout<<arr[i];
       }
       else{
        return -1;
       }
    }
    return 0;
}