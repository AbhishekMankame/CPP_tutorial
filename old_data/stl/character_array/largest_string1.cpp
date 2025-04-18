#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

// Problem: Read N strings and print the largest string. Each string can have upto 1000 characters.

int main(){
    int n;
    cin>>n;
    cin.ignore(); // Ignore the newline character after reading n
    // Note here we can also use cin.get() to consume that newline character.
    char sentence[1000]; // To store the largest string
    char largest[1000];
    int largest_len=0; // To store the length of the largest string
    while(n--){
        cin.getline(sentence, 1000); // Read a string with spaces
        //cout<<sentence<<endl;
        int len = strlen(sentence);
        if(len>largest_len){
            largest_len=len; // Update the length of the largest string
            strcpy(largest, sentence); // Copy the largest string
        }
    }
    cout<<"Largest sentence is: "<<largest<<endl; // Print the largest string
    return 0;
}

/*Let's talk about complexity
Time complexity: O(N*M) where N is the number of string and M is the length of the largest string. 
Space complexity: O(M) where M is the length of the largest string. 

*/

/* Let's talk about complexity of inbuilt string functions
strcpy: O(N) where N is the length of the string to be copied. 
strcat: O(N) where N is the length of the string to be concatenated. 
strcmp: O(N) where N is the length of the string to be compared. 
strlen: O(N) where N is the length of the string.
strchr: O(N) where N is the length of the string. --> strchr(s,c) is used to find the first occurrence of character c in string s.

*/