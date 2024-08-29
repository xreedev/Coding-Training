#get a string as input ,then reverse the string withou duplicates and print it using lists
a="hello"
b=""
l=[]
for i in a:
    if(i not in l):
        l.append(i)
print(l)
new=l[::-1]
j=0
for i in new:
    b+=i
print(b)