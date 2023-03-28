#include <iostream>
#include <string>

using namespace std;

string reverseWord(string str){
    int n = str.length();

    // Reverse string
    for(int i=0; i<n/2; i++){
        swap(str[i], str[n-i-1]);
    }

    return str;
}

int main() {
    string s = "Geeks";
    cout << "Input: " << s << endl;
    cout << "Output: " << reverseWord(s) << endl;

    s = "for";
    cout << "Input: " << s << endl;
    cout << "Output: " << reverseWord(s) << endl;

    return 0;
}
