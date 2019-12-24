#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> stack; stack.push('#');//initilization
    map<char, char> mapping;
    mapping.insert(pair<char, char>('}','{'));
    mapping.insert(pair<char, char>(']','['));
    mapping.insert(pair<char, char>(')','('));
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            stack.push(s[i]);
        }else if(stack.top() == mapping.find(s[i])->second){
            stack.pop();
        }else{
            return "NO";
        }
    }
    return stack.empty() || stack.top() == '#' ?"YES": "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
