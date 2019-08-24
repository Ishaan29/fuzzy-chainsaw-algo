#include<iostream.h>
using namespace std;
int main(){
    int odd = 1;
    int even = 1;
    int n;
    cin>>n;
    for(int i = 0 ; i<=n; i++){
        if(i % 2 == 0){
            odd *= 3;
        }else{
            even *= 2;
        }
    }

    if(n % 2 == 0){
        printf("%d", odd);
    }else{
        printf("%d", even);
    }
    return 0;
}

