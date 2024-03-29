#include <iostream>
using namespace std; 
void printArray(int altSwap[],int size){
    for(int i=0;i<size;i++){
        cout<<altSwap[i]<<endl;
    }
}
void swapArray(int altSwap[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(altSwap[i],altSwap[i+1]);
            
        }
    }
}
int main (){
    int altSwap[]={2,6,8,9,7,6};
    swapArray(altSwap,6);
    printArray(altSwap,6);
    
    return 0;
}