#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct array{
    int n;
    int *arr;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int row,numq;
    cin>>row>>numq;
    struct array a[row]; 
    for(int i=0;i<row;i++){
        cin>>a[i].n;
        a[i].arr=new int[a[i].n];
        for(int j=0;j<a[i].n;j++){
            cin>>(a[i].arr[j]);
        }
    }
    for(int k=0;k<numq;k++){
        int i,j;
        cin>>i>>j;
        cout<<a[i].arr[j]<<endl;
    }
    return 0;
}
