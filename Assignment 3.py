def ques1():
    val = input("Enter a Value : ")
    for x in val:
        if x.isupper():
             print(x,' - Character is Upper Case')
        elif x.islower():
             print(x,' - Character is Lower Case')
        elif x.isdigit():
             print(x,' - Character is Digit')
        elif x.isspace():
             print(x,' - Character is Space')


def ques2():
    print("\n")
    print("Largest number & Factorial")
    val1 = int(input("Enter 1st number : "))
    val2 = int(input("Enter 2nd number : "))
    val3 = int(input("Enter 3rd number : "))
    if(val1 > val2):
        if(val1 > val3):
            print(val1 ," is the largest number")
        else:
            print(val3 , " is the largest number")
    else:
        print(val2 , " is the largest number")
        
    n = 1
    if(val3 == 0):
        print("Factorial of ",val3," is ",1)
    elif(val3<0):
        print("Factorial of ",val3," is not possible")
    else:
        for i in range(1,val3+1):
            n = n*i
        print("Factorial of ",val3," is ",n)
        
        

def ques3():
    print("\n")
    bin = []
    print("Binary representation")
    dec = int(input("Enter a +ve Number : "))
    i = 0
    if(dec==0):
        print("Binary representation of 0 : 0")
    else:
        while(dec>0):
             bin.append(dec%2)
             dec = dec//2
        bin.reverse()    
        print("Binary representation : ",''.join(str(i) for i in bin))
        
    
    

def ques5():
    print("\n")
    print("ODD numbers")
    avg = []
    while True:
        num = int(input("> Enter a number : "))
        if num == -1:
            break
        else:
            avg.append(num)
            
    sm = 0
    count = 0
    for i in avg:
        if(i%2==0):
            pass
        else:
            sm = sm + i
            count = count +1
    if (count == 0):
        print("ALL the numbers are even")
    else:
        new_avg = sm/count
        print("Count of Odd numbers : ",count)
        print("Sum of Odd umbers : ",sm)
        print("Average of Odd numbers : ",new_avg)
    

def ques4():
    print("\n")
    print("Power of 2")
    count = 0
    num1 = int(input("Enter a +ve number : "))
    fn = num1                          #binary representation of number 
    if(num1 !=0 and num1&(num1-1)==0): 
        print(fn, "is a power of 2")   
    else:
        print(fn,"is not a power of 2")

    
        
    
ques1()
ques2()
ques3()
ques4()
ques5()
