#include <iostream>

using namespace std;

int BinarySearch (int x,int y[],int z,int i){
    int mid = ((x-1)+i)/2;
    if (z == y[mid]){
        return mid;
    }
    else {
        if (z > y[mid]) {
            return BinarySearch (x,y,z,mid);
        }
        if (z < y[mid]) {
            return BinarySearch (mid,y,z,0);
        }
        else {
            return -1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    int answer = BinarySearch (n,a,k,0) ;
    cout << answer << endl;
    return 0;
}
