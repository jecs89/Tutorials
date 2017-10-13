
import igraph

# load data into a graph
g = igraph.Graph.Read_Ncol('net.txt')

# plot graph
igraph.plot(g)
