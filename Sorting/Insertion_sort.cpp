#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void InsertionSort(int a[], int n){
    int key,j;
    for (int i = 1; i < n-1; i++){
        key=a[i];
        j=i-1;
        while(a[j]>key && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main()
{
    int n, a[100];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    printArray(a, n);
    cout << endl;
    InsertionSort(a, n);
    cout << endl;
    printArray(a, n);
    return 0;
}