# Question Link: https://www.codechef.com/SEPT20B/problems/CHFNSWAP
t = int(input());
for tLoop in range(t):
    n = int(input());
    sm = (n*(n+1))//2
    if(sm%2!=0):
        print(0)
    else:
        y = int(sm**(0.5))
        sm=sm//2
        for i in range(105):
            x=y+i
            sumx = (x*(x+1))//2
            if(sumx==sm):
                print(((x-1)*(x)//2)+((n-x-1)*(n-x)//2)+(n-x))
                break
            elif(sumx>sm):
                print(n-x+1)
                break
