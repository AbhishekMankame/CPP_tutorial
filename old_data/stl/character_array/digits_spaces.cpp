#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

// Given a sentence, count the alphabets, number of digits and spaces in the sentence
// and print the number of digits and spaces in the sentence.

int main(){
    // store and then count
    // read one by one and then count

    char ch;
    ch=cin.get();

    //count
    int alpha=0;
    int space=0;
    int digit=0;

    while(ch!='\n'){
        if(ch>='0' and ch<='9'){
            digit++;
        }
        else if(ch>='a' and ch<='z'){
            alpha++;
        }
        else if(ch>='A' and ch<='Z'){
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
            space++;
        }
        ch=cin.get(); // I missed this line in the previous code due to which it was stuck in infinite loop
    }
    cout<<"Total Alphabets: "<<alpha<<endl;
    cout<<"Total Digits: "<<digit<<endl;
    cout<<"Total Spaces: "<<space<<endl;
    cout<<"Total Characters: "<<alpha+digit+space<<endl;

}

/*Let's talk about the complexity
Time Complexity: O(n) where n is the number of characters in the string.
Space Complexity: O(1) as we are using only a few variables to store the count of digits, alphabets and spaces.
*/
