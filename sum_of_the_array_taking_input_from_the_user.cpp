#include <iostream>
using namespace std;

int marksSum(int marks[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum  =  sum + marks[i];
    }
    
    return sum;
    
}

int main() {
    int size;
    cout<<"Enter the no. of total subject:"<<endl;
    cin>>size;
    int marks[10];
    cout<<"Enter the marks of the subject";
    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
    }
    cout<<"sum of the marks is:"<<marksSum(marks,size);
    return 0;
}