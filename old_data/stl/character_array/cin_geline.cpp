#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

// cin.getline() --> cin.getline() is used to read a line of text from the input stream. It reads the characters until a newline character is encountered or the specified maximum number of characters is read.
// It also discards the newline character from the input stream. The function takes two arguements: the character array to store the input and the maximum number of characters to read.

int main(){
    char sentence[1000];
    cin.getline(sentence, 1000,'\n'); // Read a line of text from the input string and store it in the character array 'sentence'
    cout << "The sentence is: " << sentence << endl; // Print the sentence to the console
}