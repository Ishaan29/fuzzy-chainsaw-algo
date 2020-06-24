#include <bits/stdc++.h>
using namespace std;
// A dynamic programming based function to find nth 
// Catalan number 
unsigned long int catalanDP(unsigned int n) 
{ 
    unsigned long int catalan[n+1]; 

    catalan[0] = catalan[1] = 1; 

    for (int i=2; i<=n; i++) 
    { 
        catalan[i] = 0; 
        for (int j=0; j<i; j++) 
            catalan[i] += catalan[j] * catalan[i-j-1]; 
    } 

    return catalan[n]; 
} 
int main(){
    unsigned int n;
    cin>>n;
    cout<<catalanDP(n)<<endl;
}
