# Program: 2
# Filename: p2.py
# Description: Adds two numbers entered by the user.

class Calculator:
    """A simple calculator to add two numbers."""

    def get_input(self):
        """Prompts the user to input two numbers and returns them as integers."""
        try:
            num1 = int(input("Introduce the first number: "))
            num2 = int(input("Introduce the second number: "))
            return num1, num2
        except ValueError:
            print("Invalid input. Please enter integers only.")
            return self.get_input()  # Retry input

    def sum_numbers(self, num1, num2):
        """Returns the sum of two numbers."""
        return num1 + num2

    def run(self):
        """Runs the calculator program."""
        num1, num2 = self.get_input()
        result = self.sum_numbers(num1, num2)
        print(f"The sum of {num1} and {num2} is: {result}")


# Main program
if __name__ == "__main__":
    calculator = Calculator()
    calculator.run()