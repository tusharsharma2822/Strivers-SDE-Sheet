/*Solution 1: Find the element present at the particular row and coloumn*/

#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int findNCR(int n, int r){
    int numerator = factorial(n);
    int denominator1 = factorial(r);
    int second = n-r;
    int denominator2 = factorial(second);
    int denominator = denominator1*denominator2;
    int result = numerator/denominator;
    return result;
}

int main(int argc, char const *argv[])
{
    int row;
    cout << "Enter the value of the row: ";
    cin >> row;

    int col;
    cout << "Enter the value of the coloum: ";
    cin >> col;

    int result = findNCR(row-1,col-1);

    cout << result << endl;

    return 0;
}

