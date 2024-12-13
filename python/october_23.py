# Example 2 of a function can return more than one values:
'''
def calc(a,b):
    sum=a+b
    sub =a-b
    multi=a*b
    div=a/b
    return sum,sub,multi,div
t = calc(100,23)
print("the all four operation")
for i in t:
    print(i)
'''
#example of keyword function
'''
def great(name,msg):
    print("hello",name,msg)
    #funtion calling
great(name="swaraj",msg="Good morning")
great(msg="Good morning",name="swaraj")
'''



