#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int start = 0;
    int end = size -1;
    
   // int mid = (start + end)/2; it can generate error in bigger values
   // same work
   int mid = start +(end - start)/2;

    while(start <= end){
        if(arr[mid] == key) {
            return mid;
        }

        // go to right part
        if(key>arr[mid]){
            start = mid +1;
        }
        else {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main (){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenindex = binarySearch(even,6,12);
    cout << "index of 12 is  " << evenindex << endl;

    
    int oddindex = binarySearch(odd,5,16);
    cout << "index of 16 is  " << oddindex << endl;
return 0;
}
