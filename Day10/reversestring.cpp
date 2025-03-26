#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int lo = 0;
        int hi = s.length() - 1;

        // Trim leading and trailing spaces
        while (lo <= hi && s[lo] == ' ') lo++;
        while (hi >= lo && s[hi] == ' ') hi--;

        string new_string;
        int end = hi; // This tracks the end of the current word.

        // Loop to reverse the words
        while (hi >= lo) {
            if (s[hi] == ' ') {
                // Extract the word and append it to new_string
                string substring = s.substr(hi + 1, end - hi);
                new_string += substring + " ";

                // Skip multiple spaces between words
                while (hi >= lo && s[hi] == ' ') hi--;
                end = hi; // Update the end to the new word's end
            }
            hi--;
        }

        // Add the last word (since it's not followed by a space)
        string last_word = s.substr(lo, end - lo + 1);
        new_string += last_word;

        return new_string;
    }
};
