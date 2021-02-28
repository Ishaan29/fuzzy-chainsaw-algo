from collections import defaultdict
for a in range(int(input())):
    x  = int(input()) 
    joke = input().split() 

    defaultJoke = defaultdict(set)
    for element_joke in joke:
        defaultJoke[element_joke[0]].add(element_joke[1:])

    
    key = list(defaultJoke.keys())
    result = 0 
    for lmn in range(len(key)):
        for xyz in range(lmn+1, len(key)):
            milan = len(defaultJoke[key[lmn]].intersection(defaultJoke[key[xyz]]))
            result  += 2*(len(defaultJoke[key[lmn]])-milan)*(len(defaultJoke[key[xyz]])-milan)
    print(result)
