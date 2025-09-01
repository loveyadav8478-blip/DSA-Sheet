#include<iostream>
using namespace std;
void printArray(int a[]){
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
}
void inputArray(int a[]){
    for (int j = 0; j < 5; j++)
    {
        cin>>a[j];
    }
}
int main(){
    int a[5];
    cout<<"Enter the element :";
    inputArray(a);
    printArray(a);
    return 0;
}