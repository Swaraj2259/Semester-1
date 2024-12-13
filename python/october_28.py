#default arguments
'''
def great(name,msg="have good day"):
    print("hello",name,msg)
    #funtion calling
#non-default argument follows default argument

great("swaraj")
great("swaraj","wattamwar")
'''
#example of varible length argruments
'''
def add(*nums):
    sum=0
    for i in nums:
        sum+=i
    print(sum)
add()
add(10)
add(10,20,30,40)
add(10,20,30)
'''
# example of varible keyward argument to the function using **kwargs
'''
def func_kwargs(**data):
    print("\nData type of argument",type(data))

    for key,value in data.items():
        print("{} is {}".format(key,value))

func_kwargs(first_name="swaraj",age=20,college="itm")
'''
#calling a funtion within a funtion 

'''
def capitalize(text):
    return text.lower()

def greet(name):
    return f"hello,{name}"

def greet_and_capitalize(name):
    n=capitalize(name)
    return greet(n)
#test the funtion
result=greet_and_capitalize("Alice")
print("final result",result)

'''