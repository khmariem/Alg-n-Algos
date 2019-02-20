/*
Bubble sorting.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> bubble(vector<int> unsorted){
    
    int s = unsorted.size();
    int temp;
    
    while(s>0){
        
        for(int i=0;i<s-1;i++){
            
            if(unsorted[i]>unsorted[i+1]){
                
                temp = unsorted[i];
                unsorted[i] = unsorted[i+1];
                unsorted[i+1] = temp;
                
            }
            
        }
        
        s--;
        
    }
    
    //do not mind the name, it's sorted now :)
    return unsorted;
    
}

int main()
{
   cout << "Hello World" << '\n';
   vector<int> m {34,6,14,7,6,10,48};
   vector<int> mSorted = bubble(m);
   
   for(int i=0;i<m.size();i++){
       
       cout << mSorted[i] << ' ';
       
   }
   
   return 0;
   
}