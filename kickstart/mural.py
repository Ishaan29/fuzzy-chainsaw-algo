def solve(beu , n):
    piviot = len(beu) //2
    m = max(beu)
    i = beu.index(m)
    upper = beu[i:i+piviot]
    lower = beu[:i]
    a = sum(upper)
    b = sum(lower)
    return max(a,b)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        n = int(input())
        beautyScore = list(map(int, input().split()))
        print(solve(beautyScore, n))

