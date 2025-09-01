#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int insert;
    int index;
    int n;
    cout<<"Enter the n :";
    cin>>n;
    cout << "Enter element :";
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    cout<<"Enter index which you want to insert :";
    cin >> index;
    cout << "Enter the insert element :";
    cin >> insert;
    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = a[insert];
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}