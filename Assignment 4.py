import math
#import collections

def add(x,y):
    print("Sum = ",x+y)

def sub(x,y):
    print("Subtraction = ",x-y)

def mul(x,y):
    print("Multiplication = ",x*y)

def div(x,y):
    print("Division = ",x/y)

def tri_cos(x,y):
    print("Cosine : x = ",math.cos(math.radians(x)), " y = ",math.cos(math.radians(y)))

def tri_sin(x,y):
    print("Sine : x = ",math.sin(math.radians(x)), " y = ",math.radians(math.sin(y)))

def tri_tan(x,y):
    print("Tan : x = ",math.tan(math.radians(x)), " y = ",math.tan(math.radians(y)))




while True:
    print("Operations :")
    print("1. Calculator")
    print("2. Reverse")
    print("3. Prime Number")
    print("4. display month")
    print("5. Sorting 3 number")
    print("6. Quit")
    sh = int(input(" \n Enter Choice :"))
    if(sh==1):
        a=int(input("Enter a number :"))
        b=int(input("Enter a number :"))
        
        while True:
            print("\n Operations :")
            print("1. Addition")
            print("2. Subtraction")
            print("3. Multiplication")
            print("4. Division")
            print("5. Cosine")
            print("6. Sine")
            print("7. Tan")
            print("8. Quit")
            ch = int(input(" \n Enter Choice :"))
            if(ch==1):
                add(a,b)
            elif(ch==2):
                sub(a,b)
            elif(ch==3):
                mul(a,b)
            elif(ch==4):
                div(a,b)
            elif(ch==5):
                tri_cos(a,b)
            elif(ch==6):
                tri_sin(a,b)
            elif(ch==7):
                tri_tan(a,b)
            elif(ch==8):
                break     
            else:
                print("Invalid Choice") 
    
    elif(sh==2):
        c = int(input("Enter a +ve integer number :"))
        fc = c
        rev = 0
        while(c!=0):
            rev = rev * 10
            rev = rev + (c%10)
            c = c//10
        print("Reverse of ",fc," : ",rev)    


    elif(sh==3):
        prime = int(input("Enter a +ve number : "))
        i = 2
        flag = 0
        if(prime == 0):
            print("Not a prime number")
        else:
            while(i<=(prime/2)):
                if(prime%i==0):
                    flag=1
                    break
                i=i+1
            if(prime == 1):
                print("Niether Prime nor Composite")
            else:
                if(flag==0):
                    print(prime," is a Prime number")
                else:
                    print(prime," is a Composite number")
            print("\n")
            

    elif(sh==4):
        month = ["January","Feb","March","April","May","June","July","August","September","October","November","December"]
        dig = int(input("Enter a Digit (between 1-12) : "))
        print("This Digit represent ",month[dig-1])
        print("\n")

    elif(sh==5):
        mylist = []
        for i in range(0,3):
            item = int(input("Enter a number :"))
            mylist.append(item)
        sorlist = list(mylist)
        declist = list(mylist)
        declist.sort(reverse = True)
        mylist.sort()
        if(mylist == sorlist):
            print("Numbers are sorted")
        elif(declist == sorlist):
            print("Numbers are sorted")
        else:
            print("Numbers are not sorted")
        print("\n")
    elif(sh==6):
        break
    else:
        print("Invalid operation!")

