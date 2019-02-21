/*
The insertion sorting algorithm.

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSorting(vector<int> unsorted){
    
    int s = unsorted.size();
    
    for(int i=0;i<s;i++){
        
        int currentVal = unsorted[i];
        int currentInd = i;
        
        while(currentInd>0 and unsorted[currentInd-1] > currentVal){
            
            unsorted[currentInd] = unsorted[currentInd-1];
            currentInd--;
        }
        
        unsorted[currentInd] = currentVal;

    }
    
    return unsorted;
    
}


int main(){
    
    cout << "Hello !\n";
    vector<int> initialArr{43,10,7,5,65,19};
    vector<int> sortedArr = insertionSorting(initialArr);
    
    for(int i=0;i<initialArr.size();i++){
        
        cout << sortedArr[i] << " ";
        
    }
    
    return 0;
}