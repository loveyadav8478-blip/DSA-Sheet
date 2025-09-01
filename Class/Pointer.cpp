#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    average(arr,&arr[0]);
    return 0;
}
void average(int arr[], int *ptr){
    int sum = 0, avg;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + (*(ptr+i));
    }
    avg = sum/5;
    cout<<avg<<endl;
}