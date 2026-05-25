#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,8,9};
    int left = 0,target = 9;
    int right = sizeof(arr)/4 - 1;
    bool found = false;
    while(left <= right){
        int mid = (left + right)/2;
        if(target < arr[mid]){
            right = mid - 1;
        }else if(target > arr[mid]){
            left = mid + 1;
        }else{
            cout<<"target at index "<<mid;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"not founded";
    }
}