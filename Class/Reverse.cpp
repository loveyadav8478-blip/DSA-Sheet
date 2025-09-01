#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    printArray(arr);
    int i = 0, j = 4, temp;
    while (i <= j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printArray(arr);
    return 0;
}
void printArray(int arr[]){
    for (int j = 0; j < 5; j++)
    {
        cout<<arr[j];
    }
}