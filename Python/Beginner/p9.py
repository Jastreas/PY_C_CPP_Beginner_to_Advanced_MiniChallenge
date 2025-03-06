#Program: 9
#File Name: p9.py
#Description: Implement a recursive function to calculate the factorial.  

#factorial of 4 = 4x3x2x1

def recursive_factorial(n):
    if n == 1:
        return 1
    else:
        print(n) 
        return n*recursive_factorial(n-1)
print(recursive_factorial(4))