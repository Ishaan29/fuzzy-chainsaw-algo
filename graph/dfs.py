from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addNode(self, u,v):
        self.graph[u].append(v)

    #based on function recursion stack
    def dfsutil(self,k,visited):
        visited[k] = True
        print(k)

        for i in self.graph[k]:
            if visited[i] == False:
                self.dfsutil(i,visited)

    def dfs(self):
        visited = [False]*(len(self.graph))

        for i in range(len(self.graph)):
            if visited[i] == False:
                dfsutil(i,visited)


if __name__ == '__main__':
    pass

