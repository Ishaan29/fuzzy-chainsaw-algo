def solve(s,N):
    l = list()
    for i in range(N):
        for j in range(i, N):
            if(s[i] == s[j]):
                pass
        pass 
    pass 


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        N = int(input())
        arr = list(map(int, input().split()))
        solve(arr,N)

