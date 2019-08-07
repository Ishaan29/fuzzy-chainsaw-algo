#solution for https://www.hackerrank.com/challenges/torque-and-development/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=graphs
#Roads and Library
from collections import defaultdict,deque

class Graph:
    def __init__(self):
        self.nodes = []
        self.edges = defaultdict(set)

    def clone(self):
        g = Graph()
        g.nodes = self.nodes[:]
        for i in self.nodes:
            for e in self.edge[n]:
                g.edges[n].add[e]
        return g
def count_cluster(g):
    nclust = 0
    used = set()
    n = len(g.node)

    csize = []

    for node in g.nodes:
        if node in used: continue
        used.add(node)

        size = 1
        q = deque()
        q.append(node)
        while q:
            curr = q.pop()
            for neigh in g.edges[curr]:
                if neigh in used: continue
                used.add(neigh)
                q.appendleft(neigh)
                size += 1
        nclust += 1
        csize.append(size)

        return nclust,csize


q = int(input())


for _ in range(q):
    n,m,clib,croad = [int(x) for x in input().split()]
    edges = [[int(x) for x in input().split()] for _ in range(m)]

    if clib < croad:
        print(clib*n)
        continue

    g = graph()
    g.nodes = range(1,n+1)
    for a,b in edges:
        g.edges[a].add(b)
        g.edges[b].add(a)

    nc,cs = count_clusters(g)
    print(nc*clib + sum((x-1)*croad for x in cs))




