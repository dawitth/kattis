//
// Created by Jonathan Knorn on 16-02-12.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<char,string> m1 = {{'0',"+---+"}, {'1',"    +"}, {'2',"+---+"}, {'3',"+---+"}, {'4',"+   +"}, {'5',"+---+"}, {'6',"+---+"}, {'7',"+---+"}, {'8',"+---+"}, {'9',"+---+"}, {':',"     "}};
map<char,string> m2 = {{'0',"|   |"}, {'1',"    |"}, {'2',"    |"}, {'3',"    |"}, {'4',"|   |"}, {'5',"|    "}, {'6',"|    "}, {'7',"    |"}, {'8',"|   |"}, {'9',"|   |"}, {':',"     "}};
map<char,string> m3 = {{'0',"|   |"}, {'1',"    |"}, {'2',"    |"}, {'3',"    |"}, {'4',"|   |"}, {'5',"|    "}, {'6',"|    "}, {'7',"    |"}, {'8',"|   |"}, {'9',"|   |"}, {':',"  o  "}};
map<char,string> m4 = {{'0',"+   +"}, {'1',"    +"}, {'2',"+---+"}, {'3',"+---+"}, {'4',"+---+"}, {'5',"+---+"}, {'6',"+---+"}, {'7',"    +"}, {'8',"+---+"}, {'9',"+---+"}, {':',"     "}};
map<char,string> m5 = {{'0',"|   |"}, {'1',"    |"}, {'2',"|    "}, {'3',"    |"}, {'4',"    |"}, {'5',"    |"}, {'6',"|   |"}, {'7',"    |"}, {'8',"|   |"}, {'9',"    |"}, {':',"  o  "}};
map<char,string> m6 = {{'0',"|   |"}, {'1',"    |"}, {'2',"|    "}, {'3',"    |"}, {'4',"    |"}, {'5',"    |"}, {'6',"|   |"}, {'7',"    |"}, {'8',"|   |"}, {'9',"    |"}, {':',"     "}};
map<char,string> m7 = {{'0',"+---+"}, {'1',"    +"}, {'2',"+---+"}, {'3',"+---+"}, {'4',"    +"}, {'5',"+---+"}, {'6',"+---+"}, {'7',"    +"}, {'8',"+---+"}, {'9',"+---+"}, {':',"     "}};

vector<map<char,string>> v = {m1,m2,m3,m4,m5,m6,m7};

int main(){
    string s;
    cin >> s;

    while(s.compare("end")) {

        for(auto it = v.begin(); it != v.end(); ++it){
            map<char,string> m = *it;
            cout << m[s[0]] << "  " << m[s[1]] << m[s[2]] << m[s[3]] << "  " << m[s[4]] << endl;
        }

        cout << endl << endl;
        cin >> s;
    }
    cout << "end" << endl;
    return 0;
}