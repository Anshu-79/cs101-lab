
class Account:
    def __init__(self, account_number):
        self.account_number = account_number
        self.balance = 0
    
    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
        else:
            print("Insufficient balance!")
    
    def display_balance(self):
        print(f"Current Balance: {self.balance}")

class SavingsAccount(Account):
    def __init__(self, account_number, interest_rate):
        self.account_number = account_number
        self.balance = 0
        self.interest_rate = interest_rate

    def calculate_interest(self):
        interest = self.balance * self.interest_rate
        self.balance += interest
    
class CheckingAccount(Account):
    def __init__(self, account_number, overdraft_limit):
        self.account_number = account_number
        self.balance = 0
        self.overdraft_limit = overdraft_limit

    def withdraw(self, amount):
        if self.balance + self.overdraft_limit >= amount:
            self.balance -= amount
        else:
            print("Withdrawal amount exceeds overdraft limit!")

# Creating instances of SavingsAccount and CheckingAccount
savings_account = SavingsAccount("SA123", interest_rate=0.05)
checking_account = CheckingAccount("CA456", overdraft_limit=100.0)
# Depositing and withdrawing from SavingsAccount

savings_account.deposit(1000.0)
savings_account.display_balance() # Output: Current Balance: 1000.0
savings_account.withdraw(200.0)
savings_account.display_balance() # Output: Current Balance: 800.0
# Calculating and adding interest to SavingsAccount
savings_account.calculate_interest()
savings_account.display_balance() # Output: Current Balance: 840.0
# Depositing and withdrawing from CheckingAccount
checking_account.deposit(500.0)
checking_account.display_balance() # Output: Current Balance: 500.0
checking_account.withdraw(600.0)
checking_account.display_balance() # Output: Current Balance: -100.0 (within overdraft limit)