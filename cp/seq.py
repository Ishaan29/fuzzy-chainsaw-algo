def series(n):
    ans = [0 for _ in range(n)]
    even = 1
    odd = 1
    for i in range(0 ,n-1):
        if(i % 2 == 0):
            odd *= 3
        else:
            even *= 2
    if n%2 == 0:
        return odd
    else:
        return even






if __name__ =='__main__':
    n = int(input())
    print(series(n))

