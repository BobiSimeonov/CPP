# include <iostream>
# include <string>
# include <vector>
using namespace std;


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        string alphabet[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for (int i = 0; i < words.size(); i++){
            int alphabet_index = 0;
            bool flag = true;
            char letter = words[i][0];
            int check = alphabet[1].find(words[i][0]);
            if (alphabet[1].find(tolower(words[i][0])) >= 0 && alphabet[1].find(tolower(words[i][0])) < 9){
                alphabet_index = 1;
            } else if (alphabet[2].find(tolower(words[i][0])) >= 0 && alphabet[2].find(tolower(words[i][0])) < 7){
                alphabet_index = 2;
            }
            for (int j = 0; j < words[i].length(); j++){
                if (alphabet[alphabet_index].find(tolower(words[i][j])) >= 0 && alphabet[alphabet_index].find(tolower(words[i][j])) < 10){
                    continue;
                } else {
                    flag = false;
                    break;
                }
            }
            if (flag == true){
                result.push_back(words[i]);
            }
        }

        return result;
    }
};


int main(){

vector<string> words = {"adsdf", "sfd"};
vector <string> result;
    Solution solution;
    result = solution.findWords(words);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
        if ( i / 5 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}


// Input: vector<string> words = {"adsdf", "sfd"};
// Expected Output: ["adsdf","sfd"]

// Input: vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
// Expected output: ["Alaska","Dad"]







// Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

// In the American keyboard:

// the first row consists of the characters "qwertyuiop",
// the second row consists of the characters "asdfghjkl", and
// the third row consists of the characters "zxcvbnm".