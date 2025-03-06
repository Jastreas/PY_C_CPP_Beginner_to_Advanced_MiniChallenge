#Program: 5
#File Name: p5.py
#Description: A function that counts the vowels in a string.  

def vowel_count(user_string):
    """
    Counts the vowels in a string.
    Parameters:
        user_string (str): The string in which to count vowels.
    Returns:
        int: The number of vowels in the string.
    Raises:
        TypeError: If the input is not a string.
    """
    # Type checking
    if not isinstance(user_string, str):
        raise TypeError("Input must be a string.")

    vowel_counter = 0
    for c in user_string:
        if (c == 'a' or c == 'e'or c == 'i' or c == 'o' or c == 'u'):
            vowel_counter += 1
    return vowel_counter

print(vowel_count("aaaoooiiiooouuusdfgsfdgdfgsfdgsdfgsdfg"))