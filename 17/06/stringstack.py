#GET ONE STRING AS INPUT WHICH SHOULD BE COMBINATION OF open and close parenthesis.
open=["{","[","["]
close=["}","]","}"]
str="{{}}"
stack=[]
for i in str:
    if i in open:
        stack.append(i)
    elif i in close:
        pos=close.index(i)
len(stack)>0 and open[pos]==stack[len(stack)-1]):
            stack.remove(stack[len(stack)-1])
        else:
           
        if( print("unbalanced")
if(len(stack)==0):
    print("balanced")

print(stack)