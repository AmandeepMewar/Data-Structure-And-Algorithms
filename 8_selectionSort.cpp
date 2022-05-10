/*
8. Given an unsorted array of integers, design an algorithm and implement a program to sort this array using selection sort. Your program should also find number of comparisons and number of swaps required.
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter  elements : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int smallestIndex(int arr[], int i,int n){
    int smallest = arr[i];
    int a = i;

    for (int j = i+1 ; j < n; j++){
        if (arr[j] < smallest){
            smallest = arr[j];
            a = j;
        }
    }
    return a;
}
void selection_Sort(int arr[], int n){
    
    int index;

    for (int i = 0 ; i < n-1 ; i++){

        index = smallestIndex(arr, i, n);

        if (i != index){
            swap(&arr[i], &arr[index]);
        }
    }
}

void display(int A[], int n){
    cout << "Elements in the array: ";
    for (int i = 0 ; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cout << "Enter number of test cases: " ;
    cin >> t;

    while (t--){
        int n;
        cout << "Enter size : " ;
        cin >> n;

        int arr[n];

        read(arr,n);

        display(arr,n);

        selection_Sort(arr,n);

        display(arr,n);
    }
}