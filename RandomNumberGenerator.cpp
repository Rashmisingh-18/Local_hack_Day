#include <bits/stdc++.h>
using namespace std;
#include <time.h>
  
// Generates and prints 'count' random numbers in range [lower, upper].
void printRandoms(int lower, int upper, 
                             int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        cout<<num<<" ";
    }
}
  
int main()
{
    int lower, upper, count;

    cout<<"Lower: ";
    cin>>lower;
    cout<<"Upper: ";
    cin>>upper;
    cout<<"Count: ";
    cin>>count;
  
    // Use current time as 
    // seed for random generator
    srand(time(0));
  
    printRandoms(lower, upper, count);
  
    return 0;
}