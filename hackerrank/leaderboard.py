def solve(l,e):
    s = set()
    for i in l:
        s.add(i)
    for i in e:
        s.add(i)
    a = list(s)
    a.sort(reverse = True)
    print(a)
    for i in range(len(e)):
        for j in range(len(a)):
            if(a[j] == e[i]):
                print(j)






if __name__ == '__main__':
    L = int(input())
    leader = list(map(int, input().split(" ")))
    E = int(input())
    Elice = list(map(int, input().split(" ")))
    solve(leader, Elice)
