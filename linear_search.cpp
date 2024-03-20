#include<iostream>
using namespace std;
bool search (int rollNo[],int size,int key){
    for(int i=0;i<size;i++){
        if(rollNo[i]==key){
            return 1;
        }
    }
    return 0;
}
int main (){
    int key;
    cout<<"Enter the rollNo.";
    cin>>key;
    int rollNo[10]={1,2,3,4,5,6,7,8};
    bool found = search(rollNo,10,key);
    if(found){
        cout<<"rollNo is pressent.";
    }
    else{
        cout<<"rollNo is absent";
    }
    return 0;
}