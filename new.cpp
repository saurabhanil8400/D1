#include<bits/stdc++.h>
using namespace std;

int Gmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int Gmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n=6;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //  BY FUNCTION USE
    cout<<Gmax(arr,n)<<endl;
    cout<<Gmin(arr,n)<<endl;

    // STL LIBRARY USED IN BELOW
    cout<<*max_element(arr,arr+n)<<endl;
    cout<<*min_element(arr,arr+n)<<endl;
    cout<<sizeof(arr);
    
    
return 0;
}