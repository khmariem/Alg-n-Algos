
'''
Function that implements the travel salesman in a greedy way.
graph: dictionary with the nodes containing the tuples (neighbour, dist_to_neighbour)
start: node from which the travel is starting

return path: the orderd path that the salemsan will follow
'''

def greedy(graph,start):

    path = [start]
    current_node = start

    for i in range(len(graph)-1):
        c = 10000
        for neighbour, dist in graph[current_node]:
            if neighbour in path:
                continue

            if dist < c:
                c = dist
                next_node = neighbour

        current_node = next_node
        path.append(current_node)

    return path


if __name__ == "__main__":

    g = {0:[(1,4),(2,3),(3,10)],1:[(0,4),(2,5),(3,2)],2:[(0,3),(1,5),(3,6)],3:[(0,10),(1,2),(2,6)]}

    print(greedy(g,0))




