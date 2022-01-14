#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) //passes
    {
        for (int j = 0; j < n - 1 - i; j++)  //comparisions
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
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
    bubbleSort(a, n);
    cout << endl;
    printArray(a, n);
    return 0;
}