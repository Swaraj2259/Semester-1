#example of globle variable
'''
a=10 #globle variable
def f1():
    a=22 #local variable
    print(a)
def f2():
    print(a)

f1()
f2()'''

#there is rule that local variable can't be defiend first
'''
def f1():
    global a  
    print(a)
    a="hello"# local varible
    
def f2():
    print(a)
a="hi"# globle varible
f1()
f2()
'''
#argument passed:exapmle of callby value and call by ref

'''
def change(a,b):
    a="vinay"
    b[0]=69
a="swaraj"
st=[10,20,30]
print(a,st)
change(a,st)
print(a,st)
'''








