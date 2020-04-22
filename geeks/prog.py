# tup = [(1,2),(3,4),(5,6,7)]
# for t in tup:
#     s = len(t)
#     if s <= 2:
#         for y in t:
#             if(y != 3):
#                 print(y)

# while True:
#     print("-------------------------MENU---------------------")
#     print("1. Menu Option 1 (Add)")
#     print("2. Menu Option 2 (Sub)")
#     print("3. Menu Option 3 (Mul)")
#     print("4. Menu Option 4 (Divide)")
#     print("5. Exit")
#     print("----------------------------------------------------")
#     ch = int(input())
#     if(ch == 1):
#         print("add")
#     elif(ch == 2):
#         print("sub")
#     elif(ch == 3):
#         print("mul")
#     elif(ch == 4):
#         print("devide")
#     elif(ch == 5):
#         break
#     else:
#         print("Wrong option")

# li = [1,2,3,4,5,6,7,8,9,10]
# for i in li:
#     print(i*i)

# d = {'A': [2,5,7], 'B': [0], 'C':[100, 45]}
# ans = {}
# print(d.keys())

# d = {'Res 1': 80, 'Res2': 20, 'Res 3': 30}
# ans = {}
# for i in d:
#     ans[i.replace(" ", "")] = d[i]
# print(ans)

# a = []
# for i in range(20):
#     if(i % 2==0):
#         a.append(i)
# print(a)

# c = [i for i in range(20) if i%2 == 0]
# print(c)

# #list comprehentation  
# d = [0 for _ in range(20)]
# print(d)

# def add_self(a):
#     return a+a

# print(add_self(10))

# x = lambda a: a + a
# print(x(10))

# def self_split(l):
#     for i in l:
#         for x in i:
#             print(x, end =" ") 
#         print()

# l = []
# for i in range(3):
#     a = input()
#     l.append(a)
# self_split(l)

# def vowel(l):
#     for i in l:
#         for x in i:
#             if(x in "aeiou"):
#                 print(x , end=" ")
#         print()

# l = []
# for i in range(5):
#     a = input()
#     l.append(a)

# vowel(l)

# def squre(a):
#     return a*a
# x = map(squre,([1,2,3,4,5]))
# print(list(x))

# def calc(func, a, b):
#     if func == 'add':
#         return a + b
#     elif func == 'sub':
#         return a - b
#     elif func == 'mul':
#         return a * b
#     elif func == 'div':
#         return a / b
#     else:
#         return 0 

# def main():
#     f = input()
#     a = int(input())
#     b = int(input())
#     print(calc(f,a,b))
# main()

# def func(l):
#     return len(l)
# x = ['apple','banana','cherry']
# print(func(x))


# x = map(lambda x : x*x, ([1,2,3,4,5]))
# print(list(x))

# f = open("text.txt", "a")
# s = "[[1,2,3,4],[5,6,7,8]]"
# f.write(s)
# f.close()

# f = open("text.txt", "rt")
# s = f.readline()
# l = list(s)
# print(l)

# x = [i for i in range(1000) if i % 2 == 0 if i % 5 == 0]
# f = open("output.txt", "a")
# f.write(str(x))
# f.close()

# f = open("output.txt", "a")
# for i in range(97,123):
#     f.write(str(i - 96) + " " + chr(i)+ "\n")
# f.close()

# def remove_line(fname):
#     flist = open(fname).readlines()
#     return [s.rstrip('\n') for s in flist]
# a = open("output.txt", "a")
# a.write(str(remove_line("input.txt")))

# f = open("input.txt", "rt")
# lines = f.readlines()
# f.close()

# a = open("output.txt", "a")
# a.writelines(lines)
# a.close()

# l = map(lambda x,y: (x,y) ,([[1,2,3,4], [4,6,7,8]]))
# print(list(l))

# x = [[1,2,3,4], [4,5,6,8]]
# res = [[x[i][j] for i in range(len(x))] for j in range(len(x[0]))]
# print(res)

# f = open("input.txt", "rt")
# lst = f.readlines()
# ans = [lst[i].strip('\n') for i in range(len(lst)) if i != 3]
# print(ans)

# f = open("input.txt", "rt")
# lst = f.readlines()

# lst[0],lst[2] = lst[2],lst[0]
# print([lst[i].split('\n') for i in range(len(lst))])

# f = open("input.txt", "rt")
# lst = f.readlines()
# lst.reverse()
# print(lst)


# class Calculator:
    
#     def add(self, a,b):
#         return a+b
    
# f = Calculator()
# print(f.add(1,3))

    
# class Person:
#     def __init__(self, firstname, lastname):
#         self.firstname = firstname
#         self.lastname = lastname
#         print(type(self))

#     def display(self):
#         print(self.firstname + self.lastname)


# class Student(Person):
#     def __init__(self, year, person):
#         super().__init__(person.firstname, person.lastname)
#         self.year = year
    
#     def welcome(self):
#         print("welcome " + self.firstname + " " + self.lastname + " " + str(self.year))



# f = Person("ishaan", "bajpai")
# f.pp()
# s = Student(2020,f)
# s.welcome()

# class Up:
#     def get_string(self, name):
#         self.name = name
    
#     def print_string(self):
#         print(self.name.upper())


# u = Up()
# u.get_string("ishaan")
# u.print_string()


# class Circle:
#     def __init__(self, radius):
#         self.radius = radius
#     def area(self):
#         return 3.14 * (self.radius * self.radius)
#     def parameter(self):
#         return 2 * 3.14 * (self.radius)

# c = Circle(10)
# print(c.area())
# print(c.parameter())

# import csv
# import os


# with open("b.csv","w", newline = '') as file:
#     fieldnames = ['bookname', 'cost']
#     writer = csv.DictWriter(file, fieldnames=fieldnames)

#     writer.writeheader()
#     writer.writerow({'bookname': 'book1', 'cost': '110'})
#     writer.writerow({'bookname': 'book1', 'cost': '120'})
#     writer.writerow({'bookname': 'book1', 'cost': '130'})

# import csv
# import os

# ans = {}

# with open("book.csv", newline='') as file1, open("booknew.csv", newline='') as file2:
#     reader1 = csv.reader(file1, delimiter = ' ')
#     reader2 = csv.reader(file2, delimiter = ' ')
#     l = list(reader1)
#     m = list(reader2)
#     for (i,j)in zip(l,m):
#         ans[(list(i[0].split(","))[0])] = (list(j[0].split(","))[1])
    
# print(ans)
    
# k = []
# v = []
# for key in ans.keys():
#     k.append(key)
# for val in ans.values():
#     v.append(val)

# with open("keys.txt", "a") as f:
#     for i in k:
#         f.write(i + "\n")

# with open("book3.csv", "w") as a:
#     for i in v:
#         a.writelines(i + "\n")


# import csv
# with open("book.csv", 'r') as file:
#     reader = csv.reader(file)
#     mydict = {rows[0]:rows[1] for rows in reader}
#     #print(mydict)    
# with open("book2.csv",'r') as file:
#     reader=csv.reader(file)
#     mydict.update({rows[0]:rows[1] for rows in reader})
#     #print(mydict)
# keys=[key for key in mydict.keys()]
# values=[[value] for value in mydict.values()]
# print(f"Keys are:\n{keys}")
# print(f"Values are:\n{values}")
# with open("Keys.txt",'w') as file:
#     file.writelines(keys)
# with open("values.csv",'w',newline='') as file:
#     writer = csv.writer(file)
#     writer.writerows(values)

# import json

# jsonobj = {
# 'people':[{'name':'emp1','sal':'25000'},{'name':'emp2','sal':'30000'}]
# }
# with open("payload.json") as file:
#     a = json.read(file)
#     print(a['person'][e])

# from datetime import datetime,date,timedelta

# dates = ['01-April-2020', '01/04/2020', '01/04/2019']
# ans = []
# for dt in dates:
#     d = date(2020,1,1) 
#     if '-' in dt:
#         d = datetime.strptime(dt, "%d-%B-%Y")
#     else:
#         d = datetime.strptime(dt, "%d/%m/%Y")
#     if d.year == 2020:
#         print(d + timedelta(days = 1))
#     else:
#         print(d - timedelta(days = 1))
        
    
# import os
# from shutil import copy
# path = os.getcwd()
# os.mkdir(path + "/bkp")
# with open("test1.txt", "a") as file:
#     file.writelines("hello")
# with open("test.txt", "a") as file:
#     file.writelines("world")

# for i in os.listdir():
#     if ".txt" in i:
#         newPath = copy(path + "/" + i, path + "/bkp/",follow_symlinks=True)
#         print("copying to....." + newPath)


# def A():
#     return "sharanya", "\u2764" , 29

# a , b ,c = A()
# print(a,b, c)


# def fact(num):
#     if num == 1:
#         return 1
#     return num * fact(num-1)
#  print(fact(5))

# a  = (1,)
# print(a)

# for i in range(10):
#     class name:
#         pass
#     print(i)

x = [[1,2,3,4],[4,5,6,7]]
r = [[ (i,j) for i in range(len(x))] for j in range(len(x[0]))]
# r = [[0 for i in range(2)] for j in range(4)]
# print(r)
# for i in range(len(x)):
#     for j in range(len(x[0])):
#         r[j][i] = x[i][j]
print(r)
