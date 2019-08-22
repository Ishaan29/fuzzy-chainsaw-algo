#dfs solution
#3
#1 -1 1
#-1 -10 -1
#1 -1 1
def explore(i,j,arr,N, visited , minima):

    curr_right = float('inf')
    curr_left = float('inf')
    curr_top = float('inf')
    curr_bottom = float('inf')
    w = 0
    x = 0
    y = 0
    z = 0
    for a in range(j,N):
        w += arr[i][a]
        visited[i][a] = True
        curr_right = min(curr_right, w)
    for b in range(j-1,0,-1):
        x += arr[i][b]
        visited[i][b] = True
        curr_left = min(curr_left, x)
        print("left", curr_left)
    for c in range(i,N):
        y += arr[c][j]
        visited[c][j] = True
        curr_bottom = min(curr_bottom, y)
        print("bottom",curr_bottom)
    for d in range(i-1,0,-1):
        z += arr[d][j]
        visited[d][j] = True
        curr_top = min(curr_top, z)
        print("top", curr_top)
    ans = (curr_bottom + curr_left + curr_right + curr_top)
    print(ans)
    return(min(minima,ans), visited)

def solve(arr,N):
    temp = arr
    q = list()
    for i in range(N):
        for j in range(N):
            q.append([i,j,arr[i][j]])

    sq = sorted(q, key = lambda x: x[2])
    visited = [[False for x in range(N)] for y in range(N)]

    minima = float('inf')

    for i in sq:
        if(visited[i[0]][i[1]] == False):
            curr_minima, visited = explore(i[0], i[1],arr,N, visited, minima)
           # print(curr_minima)
            visited[i[0]][i[1]] = True
            minima = min(minima, curr_minima)
    print(visited)
    return minima

if __name__ == '__main__':
    N = int(input())
    mat = list()
    for i in range(N):
        arr = list(map(int, input().split()))
        mat.append(arr)
    ans = solve(mat,N)
    print(ans)

