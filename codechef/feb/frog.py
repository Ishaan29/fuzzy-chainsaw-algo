import math
for t in range(int(input())):
    typm=int(input())
    w=list(map(int,input().split()))
    l=list(map(int,input().split()))
    index={}
    solution = 0
    for i in range(1,typm+1):
        index[i]=w.index(i)
    for i in range(2,typm+1):
            t1=index[i]
            t2=index[i-1]
            t=0
            if t1<=t2:
                t=(math.ceil((t2+1-t1)/l[t1]))
            solution+=t
            index[i]+=t*(l[t1])
                
    print(solution)