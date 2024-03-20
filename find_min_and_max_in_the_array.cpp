#include <iostream>
using namespace std;
int getMax(int num[],int n){
    int maxi= INT_MIN;
    
    for(int i=0;i<n;i++){
        if(num[i]>maxi){
            maxi=num[i];
        }
    }
    return maxi;
}

int getMin(int num[],int n){
    int mini= INT_MAX;
    
    for(int i=0;i<n;i++){
        if(num[i]<mini){
            mini=num[i];
        }
    }
    return mini;
}

int main() {
    
    int size;
    cout<<"enter the size of Array:";
    cin>>size;
    int num[100];
    cout<<"enter the element of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"maximum element  is :"<<getMax(num,size)<<endl;
    cout<<"minimum element is:"<<getMin(num,size)<<endl;
}