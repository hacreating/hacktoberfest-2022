
nV = 4
INF = 99999

def floyd(G):
    dist = list(map(lambda p: list(map(lambda q: q, p)), G))

    for r in range(nV):
        for p in range(nV):
            for q in range(nV):
                dist[p][q] = min(dist[p][q], dist[p][r] + dist[r][q])
    sol(dist)

def sol(dist):
    for p in range(nV):
        for q in range(nV):
            if(dist[p][q] == INF):
                print("INF", end=" ")
            else:
                print(dist[p][q], end="  ")
        print(" ")

G = [[0, 5, INF, INF],
         [50, 0, 15, 5],
         [30, INF, 0, 15],
         [15, INF, 5, 0]]
floyd(G)
