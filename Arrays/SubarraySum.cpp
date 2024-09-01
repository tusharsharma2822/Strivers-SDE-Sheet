// /*Given an aaray of n N, find the maximum sum of a subarray*/

#include<bits/stdc++.h>
using namespace std;


/*Brute Force:- Time Complexity = O(n^3) and Space Complexity = O(1)*/

// int maximumSubarraySum(int array[], int n){
//     int result = INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum = 0;
//             for(int k=i;k<j;k++){
//                 sum += array[k];
//                 result = max(sum,result);
//             }
//         }
//     }
//     return result;
// }


/*Better Solution:- Time Complexity = O(n^2) and Space Complexity = O(1)*/

// int maximumSubarraySum(int array[], int size){
//     int result = INT_MIN;
//     for(int i=0;i<size;i++){
//         int sum = 0;
//         for(int j=i;j<size;j++){
//             sum += array[j];
//             result = max(sum,result);
//         }
//     }
//     return result;
// }

/*Optimal Solution:- Kadane's Algorithm
Time Complexity = O(n)
Space Complexity = O(1) */

int maximumSubarraySum(int array[], int size){
    int result = 0;
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += array[i];
        result = max(result,sum);

        if(sum < 0){
            sum = 0;
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
