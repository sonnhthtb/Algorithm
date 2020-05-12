def catalan(n): 
    if (n == 0 or n == 1): 
        return 1
    catalan = [0 for i in range(n + 1)] 
    catalan[0] = 1
    catalan[1] = 1 
    for i in range(2, n + 1): 
        catalan[i] = 0
        for j in range(i): 
            catalan[i] = catalan[i] + catalan[j] * catalan[i-j-1] 
    return catalan[n] 
  
t=int(input())
while (t > 0):
    t-=1
    n = int(input())
    print(catalan(n))