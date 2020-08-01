#include <iostream>

using namespace std;

int binary(int A[], int l, int r, int t){
    int mid = l + (r-l)/2;

    if( t > A[mid] ){
        return binary(A,mid,r,t);
    }

    else if( t < A[mid] ){
        return binary(A,l,mid,t);
    }

    else if( t == A[mid] ){
        return mid+1;
    }

    else
    {
        return -1;
    }
    
}

int main(){
    int A[10] = {1,2,3,4,5,6,7,10,13,34};
    int term;
    cin >> term ;
    int index = binary(A,0,9,term);
    cout << index;
}