/*
Linear search algorithm looks for an item in an array and returns its index of appearance.

If the item does not exist in the list, the algorithm returns -1.

*/


#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> arr, int item){
    
    int s = arr.size();
    int index = -1;
    
    for(int i=0;i<s;i++){
        if(arr[i] == item){
            index = i;
            break;
        }
        
    }
    
    return index;
    
}


int main(){
    
    cout << "Hello!\n";
    vector<int> arr = {45,2,16,0,9,56};
    int el1{7};
    int index1 = linearSearch(arr,el1);
    
    if(index1==-1){
        cout << "Element "<< el1 << " does not exist in the array!";
    }else{
        cout << "Element " << el1 <<  " appears at " << index1+1 << "th position in the array.\n";
    }
    
    return 0;
}