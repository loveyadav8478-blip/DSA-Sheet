#include<iostream>
using namespace std;
int main(){
    int n;
    // int a[5] = {10, 20, 30, 40, 50};
    int a[10];
    int target;
    int flag = 0;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the target to delete :";
    cin>>target;
    for (int j = target-1; j < n; j++)
    {
        a[j] = a[j+1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}