#include <iostream>
using namespace std;
void insert(int a[],int &n,int index, int insert){
    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = insert;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}
int main() {
    int n;
    int a[11]; // Leave space for extra element after insert
    cout << "Enter the size of array :";
    cin >> n;
    cout << "Enter the inserted value :";
    int value;
    cin >> value;
    cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int index = n; // Default to end if value is greatest
    for (int i = 0; i < n; i++) {
        if (a[i] > value) {
            index = i;
            break;
        }
    }
    insert(a, n, index, value);
    return 0;
}