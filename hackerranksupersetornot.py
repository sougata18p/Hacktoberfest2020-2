x=eval(input("enter the tuple value"))
y=eval(input("enter the second tuple value"))
count=0
for e in x:
    for c in y:
     if e==c:
         count+=1
         continue
if count==len(y):
    print("subset")
else:
    print("not")
        
    
