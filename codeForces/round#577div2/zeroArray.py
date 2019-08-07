#@contestName:2 zeroArray
#t1: 1 1 2 2
#t2: 1 2 3 4 5 6
if __name__=='__main__':
    L = int(input())
    arr = list(map(int , input().split()))
    s = 0
    m = max(arr)
    for i in arr:
        s += i
    if(s%2 == 1 or s<2*m):
        print('NO')
    else: print('YES')


