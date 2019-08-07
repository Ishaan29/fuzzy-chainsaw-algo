def solve(arr, days, before, after):
    win = before + after + 1
    p = min(arr[:win])
    if(p > arr.index(p) + after):
        return arr.index(p) + 1
    else:
        return arr.index(p) + after

if __name__ == '__main__':
    days, before, after = map(int, input().split())
    arr = list(map(int, input().split()))
    print(solve(arr, days, before, after))

