#Program: 7
#File Name: p7.py
#Description: Generate the first 10 numbers of the Fibonacci series.  

fibonacci_list = [0, 1]
cont = 1
while cont < 11:
    fibonacci_list.append(fibonacci_list[cont] + fibonacci_list[cont-1])
    cont += 1

print(fibonacci_list)