#Program: 4
#File Name: p4.py
#Description: A function that takes a list and returns its reverse.  

def reverse_list(p_list):
    new_list = []
    cont = len(p_list)
    while(cont > 0):
        cont -= 1
        new_list.append(p_list[cont])
    return new_list

m_list = [1, 2, "3"]
n_list = reverse_list(m_list)

print(m_list, n_list)