#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream>
#include <cmath>
using namespace std;
using std::setprecision;
using std::streamsize;


int main()
{
    double pi = atan(1)*4;
    int input = 0;
    while(true)
    {
        cout<<endl;
        cout << "Please enter how many digits(upto 20) of PI you would like to see: ";
        cin >> input;
        if(input > 0 && input <= 20)
        {
            break;
        }
        else
        {
            cout << "Please enter digits between 1 and 20" << endl;
        }
    }
    streamsize prec = cout.precision();
    cout << setprecision(input);
    cout << "Your answer is: " << pi <<endl;

}