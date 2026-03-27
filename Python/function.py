#fucntion
def is_even(number):
    """
    This function tells a number is even or odd
    Input -> a valid number
    Output -> Even/Odd
    Created By -> Mursalin
    Last Edited -> 14-03-2026
    """

    if(number % 2 == 0):
        return "Even"
    else :
        return "Odd"

for i in range(1,5):
    print(is_even(i),end=',')

print(is_even.__doc__)    #print a document for fucntion

import random as ran         #we can change import file name
print(ran.randint(1,1000))

#if a fucntion hasn't return "something" then it returns None

#default argument
def power(a=0,b=0):
    return a**b

#positional argument
power(5,6)

#keyword argument
power(b=3,a=4)

def a(*number):
    b = None
# the *number means the function can take any number of arguments,
#  and Python will store them as a tuple.
# * → collects multiple arguments

#function as object
def f(number):
    return number**2

x = f
del f
print(x(8)) 

#so mainly function is also used as a data type


#lambda fucntion
z=lambda x,y : x**y
print(z(5,3))

#it has no return value
#one line
#not used for code reusability
#no name

b = lambda x : "Even" if x%2 == 0 else "Odd"

#map : using map we can perform a operation on iterable containe
#it return a object so we have to type casting
L = [1,2,3,4,5]
print(list(map(lambda x:x+4,L)))

#filter :here given a condition and based this condition it works 
#it used to find somehting based on given condition
print(list(filter(lambda x:x%2==0,L)))


#reduce : it reduce a container
import functools
print(functools.reduce(lambda x,y:x if x>y else y,L))

#List comprehntion
L1 = [i**2 for i in L if i%2==0]
print(L1)


#__init__(self) this type method is special method . when object is created this method execute automatically
#__str__(self) when we print object it print the return string it works like toString()
#__add__(self,other) it is execute when two object is added like x+y 
#__sub__(self,other) it is execute when two object is substracted like x-y 
#__mul__(self,other) it is execute when two object is multiplied like x*y 
#__truediv__(self,other) it is execute when two object is divided like x/y 

#you can see more magic methods by serching magic methods in python

# __amount means this variable is private
# object of any class is mutable


#Thread
import threading
def task(name):
    print("program is running")

t = threading.Thread(target = task, args = ("abc",))
t.start()
t.join()

#when multiple thread change same variable
lock = threading.Lock()
x = 8
lock.acquire()
x+=1
lock.release()

#daemon thread
t = threading.Thread(target=task, daemon=True)


#generator
#in gererator function there is no return here has yield
#when it is called it return a generator object

#generator expression
gen = (i**2 for i in range(1,18))
#gen is a object
