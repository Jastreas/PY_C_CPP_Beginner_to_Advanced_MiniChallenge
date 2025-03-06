#Program: 10
#File Name: p10.py
#Description: Read a text file and count the number of lines. [Added, to check the lines with content]

file = open("exercises_practice.txt", "rt")
line_counter = 0
for line in file:
    if line == '\n':
        line_counter = line_counter
    else:
        line_counter += 1
print(f"Total lines with content: {line_counter}")