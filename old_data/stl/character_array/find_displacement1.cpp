#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

/* Practice Problem
Find Displacement: Given a long route containing N,S,E,W directions, find the shortest path to reach the location. 
Sample Input: SNNNEWE
Sample Output: NNE
Note: Here we are finding the shortest path or displacement 

*/

int main(){
    char route[1000];
    cin.getline(route,1000); // Read a line of text from the input string and store it in the character array 'route'
    int x=0;
    int y=0;
    for(int i=0;route[i]!='\0';i++){
        switch(route[i]){
            case 'N': y++; break; // Move north (y coordinate increases)
            case 'S': y--; break; // Move south (y coordinate decreases)
            case 'E': x++; break; // Move east (x coordinate increases)
            case 'W': x--; break; // Move west (x coordinate decreases)
            default: break; // Ignore any other characters
        }
    }
    cout<<"Final x and y is: "<<x<<" "<<y<<endl; // Print the final coordinates

    return 0;
}