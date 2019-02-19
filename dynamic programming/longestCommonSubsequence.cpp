/*

This is an implementation that finds the length of the longest subsequence common

to two strings.


*/



#include <iostream>
#include <string>

using namespace std;

int longestCommonSubsequence(string str1, string str2){

    //matrix to remember the length of the subsequences that were found on the go
    //rows and columns each represent one string
    int letterPath[str1.size()+1][str2.size()+1]{};

    for(int i=1;i<str1.size()+1;i++){

        for(int j=1;j<str2.size()+1;j++){

            //The current letters that we compare to est the chance of having 
            //a subsequence from that point
            string char1 = str1.substr(i-1,1);
            string char2 = str2.substr(j-1,1);

            if(char1.compare(char2)==0){

                letterPath[i][j]=max(letterPath[i][j-1]+1,letterPath[i-1][j]);

            }else{

                letterPath[i][j]=max(letterPath[i][j-1],letterPath[i-1][j]);

            }

        }

    }

    return letterPath[str1.size()][str2.size()];
}


int main() {

    string str1 = "ABCDGH";
    string str2 = "AEDFHR";

    cout << "The longest common subsequence has " << longestCommonSubsequence(str1, str2) << " characters.\n";
    
    return 0;

}