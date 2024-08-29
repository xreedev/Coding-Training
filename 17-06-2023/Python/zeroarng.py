old=[0,4,5,0,1,9,0]
new=[]
zer=[]
for i in old:
    if(i!=0):
        new.append(i)
    else:
        zer.append(i)
for i in zer:
  new.append(i)
print(new)