#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

/* String Compression
Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars: 
- If the group's length is 1, append the character to s. 
- Otherwise, append the character followed by the group's length. 

The compressed string s should not be returned separately, but instead be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into mulltiple characters in chars. 
After you are done modifying the input array, return the new length of the array. 

Input Format: In the function a vector of characters is passed. 
Output Format: Return the updated vector

Note: If compressed string is bigger than original return the original string. 
Input: aaabbccddee
Output: a3b2c2d2e2

Input: abcd
Output: abcd

*/

string compressString(string str){
    int n=str.length();
    string output;
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 and str[i+1]==str[i]){ 
            count++;
            i++;
        }
        output+=str[i]; // add the character to output
        output+=to_string(count); // add the count to output
    }
    if(output.length()>str.length()){
        return str; // return original string if compressed string is bigger than original
    }
    else{
        return output; // return compressed string
    }

}

int main(){
    string s1="aaabbccddee"; // This string uses dynamic array internally, so size can be changed in runtime also
    cout<<compressString(s1)<<endl;

    string s2="abcd";
    cout<<compressString(s2)<<endl;

    return 0;
}