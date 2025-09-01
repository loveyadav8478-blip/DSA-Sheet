#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[11];
    cout<<"Enter Size : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    int i = 0;
    while (i < n)
    {
        int correct = arr[i];
        if (arr[i] < n && arr[correct] != arr[i])
        {
            swap(arr, i, correct);
        }
        else
        {
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != j)
        {
            return j;
        }
    }
    return n;
}
void swap(int arr[], int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
