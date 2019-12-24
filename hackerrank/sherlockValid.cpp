#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int freq[26] = {0};
    for(int i = 0; i<s.length(); ++i) freq[s[i] - 'a']++;
    map<int , int> numMap; // int and the frequency;
    for(auto a: freq){
        if(numMap.find(a) == numMap.end() && a != 0){
            numMap.insert(pair<int, int>(a,1));
        }else if(a != 0){
            numMap[a]++;
        }
    }
    //NOTE:= find max frequency.
    //decide the max based on frequency times the number
    int numMax = INT_MIN;int num = 0;int m = INT_MIN;
    for(auto a: numMap){
        cout<<a.first<<"\t"<<a.second<<endl;
        if(a.first * a.second >= m){
            m = a.first * a.second;
            numMax = a.second;
            num = a.first;
        }
    }
    int count = 0;
    //NOTE:= think about the counting logic
    for(auto other: numMap){
        if(other.first != num && count){
            // //count += other.first * other.second;
            // count++;
        }
    }
    cout<<"maxNum "<<numMax<<" max "<<m<<" num "<<num<<" count "<<count<<endl;
    int max_freq = max(numMax, num);
    if(count - 1 == ((numMax + num) / max_freq) || count <= 1){
        return "YES";
    }else {
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
