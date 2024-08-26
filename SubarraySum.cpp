/*Given an aaray of n N, find the maximum sum of a subarray*/

#include<bits/stdc++.h>
using namespace std;

int maximumSubarraySum(int array[], int n){
    int result = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<j;k++){
                sum += array[k];
                result = max(sum,result);
            }
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the n of an array: ";
    cin >> n;

    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    int result = maximumSubarraySum(array,n);
    cout << result << endl;

    return 0;
}
