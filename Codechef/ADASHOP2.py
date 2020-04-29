"""
Question Link: https://www.codechef.com/MARCH20B/problems/ADASHOP2
"""

A = [3,4,6,4,1,4,8,5,4,3,1,6,8,6,8,7,1,2,5,8,1]
B = [5,6,4,2,5,8,4,1,2,1,3,8,6,4,2,1,7,8,5,8,1]
t = int(input())
for i in range(t):
    C = []
    D = []
    n = 21
    r, c = map(int,input().split())
    if r==c:
        if r!=4:
            n = n+1
            C.append(4)
            D.append(4)
    else:
        n1 = (r+c)//2
        n = n+1
        C.append(n1)
        D.append(n1)
        if n1!=4:
            n = n+1
            C.append(4)
            D.append(4)
    print(n)
    m = len(C)
    for i in range(0,m):
        print(C[i],D[i])
    for i in range(0,21):
        print(A[i],B[i])
