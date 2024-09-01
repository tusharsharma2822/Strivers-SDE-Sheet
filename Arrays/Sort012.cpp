#include<bits/stdc++.h>
using namespace std;

void sortColors(int arr[], int size){
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }

    for(int i=0;i<count0;i++){
        arr[i] = 0;
    }

    for(int i=count0;i<count0+count1;i++){
        arr[i] = 1;
    }

    for(int i=count0+count1;i<size;i++){
        arr[i] = 2;
    }
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the value of a size of an array: ";
    cin >> size;

    int array[size];
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    sortColors(array,size);

    printArray(array,size);

    return 0;
}
