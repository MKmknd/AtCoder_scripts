import numpy as np

N, M = (int(i) for i in input().split())  


P = []
Y = []

for i in range(M):
    a, b = (int(i) for i in input().split())  
    P.append(a)
    Y.append(b)

#P = np.array(P)
Y = np.array(Y)

inds = np.argsort(Y)


result = {}
result2 = {}

for num, ind in enumerate(inds):
    if P[ind] not in result:
        result[P[ind]] = [ind]
    else:
        result[P[ind]].append(ind)

    result2[ind] = "{:0=6}".format(P[ind]) + "{:0=6}".format(result[P[ind]].index(ind)+1)


for key in range(M):
    print(result2[key])




