#include<iostream> // This is used for the cout and cin functions
#include<algorithm> // This is used for the sort function
#include<cstring> // This is used for the strlen function
#include<cmath> // This is used for the pow function
#include<limits.h> // This is used for the INT_MAX and INT_MIN constants
#include<bitset> // This is used for the bitset class
#include<string> // This is used for the string class
using namespace std; // This is used to avoid writing std:: before every function

int binaryToDecimal(string s){
    string temp=s; // Copying the string s to temp
    int base=1;
    int dec=0; 
    int n=s.size(); // Getting the size of the string s
    for(int i=n-1;i>=0;i--){ // looping through the string from the last character to the first character
        if(temp[i]=='1'){ // If the character is 1, then we need to add the value of the bit to the decimal number
            dec+=base; // Adding the value of the bit to the decimal number          
        }
        base*=2; // Multiplying the base by 2 for the next bit
    }
    return dec; // Returning the decimal number
}

int main(){
    string s; // Declaring a string variable s
    cout<<"Enter the binary number: "; // Prompting the user to enter a binary number
    cin>>s; // Taking the input from the user
    cout<<"The decimal number is: "<<binaryToDecimal(s)<<endl; // Calling the binaryToDecimal function and printing the result
    cout<<"The decimal number is: "<<stoi(s,0,2)<<" using STOI function"<<endl; 
}

/* Let's talk about STOI function
The stoi function is a built-in function in C++ that converts a string to an integer. 
It is defined in the <string> header file. The function takes three arguements: 
1. The string to be converted
2. A pointer to the first character after the number in the string (optional)
3. The base of the number system (optional, default is 10)
The base can be 2 for binary, 8 for octal, 10 for decimal, and 16 for hexadecimal. 
// Here the pointer to the first character refers to the first character after the number in the string.
*/

/*Let's talk about the complexity of the above code written for binary to integer conversion
Time complexity: O(n) where n is the number of bits in the binary number. 
Space complexity: O(1) as we are using only a constant amount of space. 
*/