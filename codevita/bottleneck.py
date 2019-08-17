import collections
def minVisibleBottle(arr):
    l = len(arr)
    visible = collections.deque([])
    arr.sort()
    visible.append(arr[0])

    for i in range(1, l):
        temp = visible[0]

        if(arr[i] > temp):
            visible.popleft()
        visible.append(arr[i])
    
    return len(visible)


    



if __name__ == '__main__':
    l = input()
    arr = [int(i) for i in input().split()]
    ans = minVisibleBottle(arr)
    print(ans)
