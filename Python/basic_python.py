# print()
print("hello world")
print(6,7,sep=',',end=',')
print(8)

# variable declaration
name = 'mursalin'
a=b=c=9
d,e,f=1,2,3
g=9;h=8

print(name,a,b,c,d,e,f,g,h,sep=',')

# python has 33 key words
import keyword
print(keyword.kwlist)

# type function
print(type('mursalin'))

# user input
first_num = input("Enter first number : ")
secone_num = input("Enter second number : ")

result = int(first_num) + int(secone_num) #type conversion
print("Result =",result)

#literals 
a = 0b1010  #binary
b = 0o1046  #octal
c = 0x3452  #hexadecimal
x = 8+3j    #complex
multiline_string = """this is a boy"""
unicode = u""
raw_string = r"\n"

print(x.imag,x.real)

a = None #special literal means nothing

#arythmatic operator
print(5//2) # ans will be int 
print(5**2) # 5^2

# or,and,not logical operator

#bitwise operator
print(2 & 3)
print(~5) #compliment

#identity operator
a = 39
b = 40
print(a is b) # check if both address is same or not (is not) also used

#membership operator
c = [1,2,3]
print(3 in c)
print(5 not in c) #check it belongs or not belongs in container

#if else statement
if "mursalin" == "mursalin" and 6>5 :
    print("welcome")
    print("thank you")
elif 9<8 :
    print("very good")
else:
    print("wrong")

#while loop
while True:
    print("Hello my friend how are you")
    break

#range function
range(5)        #means 0.....4 
range(3,8)      #means 3.....7
range(4,9,2)    #means 4 6...8
range(10,0,-1)  #means 10....1

#for loop
for i in range(1,11) :
    print(i,end=' ')

for i in "Bangladesh" :
    print(i,end=' ')

#built in functions
print(max({1,5,3}))
print(round(8/3))      #give the nearest round value
divmod(a,b)            #return (a//b , a%b)
print(bin(0o123))      #oct(),hex()
print(id(a))           #gives the variable address
print(ord('y'))        #gives a character ascii value
print(len("mursalin")) #gives the lenth
print(sum((1,2,3)))    #gives the sum of iterable container
#help('print')          gives documentation for function 

#modules 
import math  

import random
a = [1,2,3,4,5]
random.shuffle(a);     #change the order randomly
print(a) 

import time
print(time.ctime())
print("hello")
time.sleep(2)
print("world")

import os
print(os.getcwd())
print(os.listdir())