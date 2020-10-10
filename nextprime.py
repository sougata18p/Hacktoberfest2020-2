#n=int(input("enter number"))
def nextprime(n):
  while True:
    n=n+1
    for i in range(2,n):
      if n%i==0:
        break
    else:
     return n
