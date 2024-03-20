#include <iostream>
using namespace std;
void update (int arr[], int size){
    cout<<"inside the Array"<<endl;
    
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
    }
    
    cout<<"\n going back in the main function"<<endl;
}

int main() {
    
    int arr[]={3,5,7,9,6};
    //update array 0 index value
    arr[0]={78};
    
    update(arr,5);
    
    for (int i=0;i<5;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}