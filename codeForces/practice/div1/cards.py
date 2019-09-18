def solve(s,n):
    one = 0
    zero = 0
    for i in s:
        if i == 'z':
            zero += 1
        if i == 'n':
            one += 1
    for i in range(one):
        print("1 ", end='')
    for j in range(zero):
        print("0  ", end='')
if __name__ == '__main__':
    n = int(input())
    s = input()
    solve(s,n)
