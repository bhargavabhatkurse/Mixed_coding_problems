a = [
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 0, 1, 0, 1, 0, 0, 0, 0, 1],
    [1, 0, 1, 0, 1, 0, 0, 0, 0, 1],
    [1, 0, 1, 0, 1, 1, 1, 1, 0, 1],
    [1, 0, 1, 0, 0, 0, 0, 1, 0, 1],
    [1, 0, 1, 0, 0, 0, 0, 1, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 1, 0, 1],
    [1, 0, 1, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 1, 0, 0, 0, 0, 0, 0, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
]

m=10
n=10

from collections import deque

def bfs(start,goal):
    q = deque()
    q.append((start,[start]))
    visited = set()
    
    while len(q)>0:
       current,path = q.popleft()
       
       if(current[0]<0 or current[1]<0 or current[0]>=m or current[1]>=n or a[current[0]][current[1]] == 1):
            continue
          
       
       
       if(current in visited):
           continue
       
       if(current == goal):
           print("bfs path is: ")
           print(path)
           print("path length is: ",len(path))
           print("nodes traversed: ",len(visited))
           return
       
       
       q.append(((current[0]-1,current[1]),path + [(current[0]-1,current[1])]))
       q.append(((current[0]+1,current[1]),path + [(current[0]+1,current[1])]))
       q.append(((current[0],current[1]-1),path + [(current[0],current[1]-1)]))
       q.append(((current[0],current[1]+1),path + [(current[0],current[1]+1)]))
       
       
       
       visited.add(current)
    
    print("not found")


def dfs(start,goal):
    q = deque()
    q.append((start,[start]))
    visited = set()
    
    while len(q)>0:
       current,path = q.pop()
       
       if(current[0]<0 or current[1]<0 or current[0]>=m or current[1]>=n or a[current[0]][current[1]] == 1):
            continue
          
       
       
       if(current in visited):
           continue
       
       if(current == goal):
           print("dfs path is: ")
           print(path)
           print("path length is: ",len(path))
           print("nodes traversed: ",len(visited))
           return
       
       
       q.append(((current[0]-1,current[1]),path + [(current[0]-1,current[1])]))
       q.append(((current[0]+1,current[1]),path + [(current[0]+1,current[1])]))
       q.append(((current[0],current[1]-1),path + [(current[0],current[1]-1)]))
       q.append(((current[0],current[1]+1),path + [(current[0],current[1]+1)]))
       
       
       
       visited.add(current)
    
    print("not found")






bfs((1,1),(2,5))
print("")
dfs((1,1),(2,5))
       
       
       
    
    
    
