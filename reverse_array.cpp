#include <iostream>
using namespace std;
void reverseArray(int revArray[],int size){
    int start = 0;
    int end =  size-1;
    while(start<=end){
        swap(revArray[start],revArray[end]);
        start++;
        end--;
    }
    
    
}
int printArray(int revArray[],int size){
    for (int i=0;i<size;i++){
        cout<<revArray[i]<<" ";
    }
    cout<< endl;
    return 0;
}

int main (){
    
    int revArray[5]= {8,9,5,7,5};
    cout<<"reverse array is :";
    reverseArray(revArray,5);
    printArray(revArray,5);
    
    return 0;
}