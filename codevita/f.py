def findPath(n):
    first = 0
    second = 0
    third = 1

    for i in range(3,n+2):
        temp = first + second + third
        first = second
        second = third
        third = temp

    return third

if __name__ == '__main__':
    n = int(input())
    ans = findPath(n)
    print(ans)

