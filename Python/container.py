#string 
c = "hello"
c = str("hello")

print(c[1])     #positive indexing
print(c[-1])    #negative indexing

#slicing
print(c[0:4:2])     #gives substring

#string are immutable data type that means it cannot be change

#delete string
del c

c = "mursalin"
print(c*5)       #string multiplication

#logical operator on string
#empty string means false and other string true 
print("hello" and "world") 
print("hello" or "world")

#function on string
print(sorted(c))                     #this function return a list that contains character
print(sorted(c,reverse=True))
c.capitalize()                       #first letter capital
c.title()                            #all words first letter capital
c.upper()                            #all letter capital
c.lower()                            #all letter small
c.swapcase()                         #change case lower to upper and vice versa
c.count("wi")                        #gives the substring count from base string
c.find("he")                         #return the first index if not found return -1
c.endswith("");c.startswith("")          #gives true false result
print("my name is {} and I am {} years old".format("mursalin",23))
print("my name is {0} and I am {1} years old".format("mursalin",23))
print("my name is {name} and I am {age} years old".format(name="mursalin",age=23))
c.isalnum()      #return true false result
c.split()        #it splits the string into a list 
c.split("hg")    #splits when hg found and hg removed
" ".join(["my","name"])        #make string from list 
c.replace("ha","nb")    
c ="   he is"
print(c.strip())      #remove leading and trailing space


#list 
#list are heterogenous
L = []                #empty list
L1 = [1,2,3]          #homogenous
L2 = [1,2,"helo"]     #heterogenous
L3 = [[1,2],[4,5]]    #multidimentional list
L4 = list("hello")

L.append(1)            #add 1 item at last
L.extend([2,4])            #add multiple item at last
L.insert(3,"item")   #add any place   
L.insert(6,[9,9,8])

del L1[0]            #delete index
L2.remove("helo")      #delete item
L2.pop()             #delete last item
L2.clear()           #make the list empty

#it has concatenation and multiplication as well as string
#it has len ,min,max,index and sorted
#it also has sort() that change permanently 


#Tuples
#tuple are heterogenous
#tuple are immutable
L = ()                #empty tuple
L1 = (1,2,3)          #homogenous
L2 = (1,2,"helo")     #heterogenous
L3 = ((1,2),(4,5))    #multidimentional tuple
L4 = tuple("hello")
L= (1,)                 #single item tuple

#it has concatenation and multiplication as well as string
#it has len ,min,max,index and sorted

#Sets
#it doesn't allow duplicates
#it has no indexing/slicing
#it doesn't allow mutable datatypes
#it itselfs a mutable data type

s = set();              #empty set create
s = {1,2,3,4}           #homogenous set
s1 ={1,1.2,'hello'}      #heterogenous set
s.add(9)                #insert element in set

#it has del,pop,remove and clear function
#here multiplication and concatenation absent
#it has len ,min,max and sorted

s.union(s1)     
s.intersection(s1)
s.difference(s1)                   #s/s1
s.symmetric_difference(s1)           #uncommon element
s.isdisjoint(s1)
s.issubset(s1)
s.issuperset(s1)


#dictionary

#it has no indexing
#it is a mutable types
#keys immutable and value can be change
#keys should be unique

d = {}               #empty dictionary
d1 = {'name':'mursalin', 'roll':240212}
print(d1['name'])    #access value 
d1.pop('name')

#it has del and clear function
#here multiplication and concatenation absent
#it has len ,min,max and sorted

d1.keys()           #return all keys 
d1.values()         #return all values

a=8
b=a         #this is aliasing and here a and b id is same

import sys
x=717
y=x
z=y
print(sys.getrefcount(x))


#if we work on mutable data type and we need to copy then we should do,
L = [1,2,3]
L1 = L[:] 