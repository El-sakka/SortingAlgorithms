#include <bits/stdc++.h>

using namespace std;

// assuming n ---> size of array


// time complexity O(n^2)
void SelectionSort(int A[],int n){
    for(int i=0;i<n-1;i++){
        int iMin = i;
        for(int j = i+1;j<n;j++){
            if(A[j] < A[iMin])
                iMin = j ;
        }
        swap(A[i],A[iMin]);
    }
}


// complexity Worstcase O(n^2)
void BubbleSort(int A[],int n){
    bool flag = 0;
    for(int k=0;k<n-1;k++){
        flag = 0;
        for(int i=0;i<n-k-1;i++){
            if(A[i] > A[i+1]){
                swap(A[i],A[i+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}

// time complexity best O(n) worst O(n^2)
void InsertionSort(int A[],int n){
    for(int i=1;i<n;i++){
        int value= A[i];
        int hole = i;
        while(hole > 0 && A[hole-1] > value){
            A[hole] = A[hole-1];
            hole --;
        }
        A[hole] = value;
    }
}

int main() {

    int A[] ={2,7,4,1,5,3};
    int B[] ={2,7,4,1,5,3};
    int C[] ={2,7,4,1,5,3};

    SelectionSort(A,6);
    BubbleSort(B,6);
    InsertionSort(C,6);

    for(int i=0;i<6;i++){
        cout<<A[i]<<" ";
    }

    cout<<"\n";

    for(int i=0;i<6;i++){
        cout<<B[i]<<" ";
    }

    cout<<"\n";

    for(int i=0;i<6;i++){
        cout<<C[i]<<" ";
    }


    return 0;
}