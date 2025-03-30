#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

/* Character array
 Character arrray is a data structure that stores a sequence of characters. 
 It is a null terminated array of characters. 
 
 Creating a Char array
 char a[100];
 
 char a[100]={'a','b','c','d','e'}; // Wrong way

 char a[100]={'a','b','c','d','e','\0'}; // Correct way

 char a[100]="hello"; // Automatically appends '\0' at the end
*/

int main(){
    char a[100]={'a','b','c','d','e'};
    cout<<a<<" "<<endl;

    // We can also initialize the character array like this
    char b[]="hello"; // Here we need not to write the null character '\0', as it will be automatically appended at the end.
    cout<<b<<endl;
    cout<<strlen(a)<<endl; // This will give the length of the character array a
    cout<<sizeof(a)<<endl; // This will give the size of the character array a

    cout<<strlen(b)<<endl; // Number of visible characters in the character array
    cout<<sizeof(b)<<endl; // This will add null by default, so this will be +1 or one more than the number of visible characters

    // char c[100];
    // cin>>c; // This will take the input until the first space
    // cout<<c<<endl;    
    // cin will not take the input after the first space, so we can use getline function to take the input until the new line character

    // Let's see the use of getline function
    //cin.getline(c);
    //cout<<c<<endl;

    char sentence[1000];
    char temp=cin.get();
    cout<<temp<<endl; // This will give the first character of the input
    int len=0;
    while(temp!='\n'){
        //sentence[len]=temp; // Storing the character in the array
        len++; // Incrementing the length of the array
        cout<<temp;
        // Update the value of temp
        temp=cin.get(); // taking the input character by character until the new line character is encountered
    }
    cout<<endl<<len<<endl; // This will give the length of the character array
    // Note: Buffer gets input from the screen once we hit enter, so we need to use cin.get() to take the input character by character until the new line character is encountered.
    return 0;

    // cin.getline(sentence,1000); // This will take the input until the new line character is encountered

}