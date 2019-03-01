#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int number){

    int begin = 0;
    int end = arr.size();

    
    while(begin<end){
        
        if(arr[(end+begin)/2] == number){
            
            return (end+begin)/2;
            
        }else if (arr[(end+begin)/2]<number){
            
            begin = (end+begin)/2+1;
            
        }else{
            
            end = (end+begin)/2;
            
        }
        
    }
    
    return -1;
    
    
    
}


int main(){
    
    vector<int> arr = {1,3,6,143,532,907};
    int number = 143;
    int index = binarySearch(arr, number);
    
    if(index!=-1){
        
        cout << "The number exists at " << index <<endl;  
        
    }else{
        
        cout << "The number does not exist";
        
    }
    
    
}