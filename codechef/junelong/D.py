def solve():
    t = int(input())
    while(t > 0):
        x = int(input())
        d = x
        c = 0
        while(x%2==0):
            c = c + 1
            x = x//2
        a = 2**(c+1)
        print(d//a)
        t = t - 1;

if __name__ == '__main__':
    solve()


