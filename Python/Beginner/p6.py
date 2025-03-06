#Program: 6
#File Name: p6.py
#Description: Use a `try-except` block to handle a division by zero.  

valid_input = False
while not valid_input:
    try:
        user_selection = int(input("1. Divide by 0, 2. Divide by 1\n"))
        valid_input = True
    except:
        print("Invalid Input")

if user_selection == 1:
    try:
        res = 1/0
    except:
        print("Cant divide by 0")
else:
    print(1/1)