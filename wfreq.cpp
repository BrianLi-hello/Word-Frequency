#include <iostream>
#include <string>
#include <iterator>
#include <map>
using namespace std;

int main(void) {
    string s;
    int count = 0;
    int len;
    map<string, int >m;
    map<string , int >::iterator itr;
    int value_count = 0;
    string key_string;

    while (cin >> s) {  // continuing to read strings until EOF
        len = s.length();
        for (int i = 0; i < len; ++i) {
            if (((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))) {
                ++count;
            } 
        }
        if (count == len) {  // if all characters in the strings are valid, add it to the map
            m[s]++;
        }
        count = 0;
    }

    while (!m.empty()) {
        for (itr = m.begin(); itr != m.end(); itr++) {  // sorting by frequencies (first key = max frequency, last key = min frequency)
            if (itr-> second > value_count) {
                value_count = itr-> second;
                key_string = itr-> first;
            }
        }
        cout << key_string << " " << value_count << endl;
        m.erase(key_string);  // deleting the key-value pair from the map
        value_count = 0;  // resetting value_count
    }
}