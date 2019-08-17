if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        x = int(input())
        arr = list(map(int, input().split()))
        l = [0 for i in range(x)]
        for i in range(1,x):
            l[i-1] = abs(arr[i-1] - arr[i])
        for i in range(0,n):
            k = i
            if(l[i] > 1 and k>n-1):
                k = 0
                if(arr[k] == l[i]):
                    print("YES")
                else:
                    print("NO")
            if(l[i] > 1 and k<n-1):
                if(l[i] == l[i+1]):
                    print("YES")
                else:
                    print("NO")





