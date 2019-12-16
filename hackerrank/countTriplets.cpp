#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the countTriplets function below.
//uniqueness is the question
long countTriplets(vector<long> arr, long r) {
    // map<long, vector<long>> mp;
    // set<long> arr_map; for(auto a: arr) arr_map.insert(a);
    // for(long i = 0; i<arr.size(); ++i){
    //     long t = arr[i];
    //     vector<long> vec;
    //     for(int p = 1; p<= 3; p++){
    //         vec.push_back(pow(t,r));
    //     }
    //     mp.insert(pair<long, vector<long>>(t, vec));
    // }
    // int global_count = 0;
    map<int, long> mp1, mp2;

    long iTripet = 0;
    for(int i = 0; i < arr.size(); ++i) {
        if ( mp2.find(arr[i]) != mp2.end() ) {
            iTripet += mp2[arr[i]];
        }
        if ( mp1.find(arr[i]) != mp1.end() ) {
            mp2[arr[i] * r] += mp1[arr[i]];
        }
        mp1[arr[i] * r]++;
    }

    return iTripet;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nr_temp;
    getline(cin, nr_temp);

    vector<string> nr = split(rtrim(nr_temp));

    int n = stoi(nr[0]);

    long r = stol(nr[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<long> arr(n);

    for (int i = 0; i < n; i++) {
        long arr_item = stol(arr_temp[i]);

        arr[i] = arr_item;
    }

    long ans = countTriplets(arr, r);

    fout << ans << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
