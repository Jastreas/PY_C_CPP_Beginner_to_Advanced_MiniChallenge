#Program: 3
#File Name: p3.py
#Description: Determine if a number is even or odd.

class Determinator:
    """Asks for a number and checks if is even or odd"""
    def get_input(self):
        while True:
            try:
                self.user_input = int(input("Introduce a number: "))
                return self.user_input
            except:
                print("Invalid input, please try again\n")
                            
    def check_even_odd(self):
        return "even" if self.user_input%2 == 0 else "odd"
    
    def run(self):
        self.get_input()
        print(self.check_even_odd())


if __name__ == "__main__":
    d = Determinator()
    d.run()