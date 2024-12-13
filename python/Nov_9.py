# rows = int(input("Enter the number of rows: "))

# for i in range(1, rows + 1):  # Outer loop for each row
#     for j in range(i):        # Inner loop for printing *
#         print("*", end="")     # Print * without a newline
#     print()                    # Move to the next line after each row
class account:
     def __init__(self,bla,acc):
          self.blance=bla
          self.account_no=acc
     def debit(self,amount):
          self.blance-=amount
          print("rs",amount,"amount is debited")
          print("total blance is ",self.get_blance())
     def credit(self,amount):
          self.blance+=amount
          print("rs",amount,"amount is credited")
          print("total blance is ",self.get_blance())    
     def get_blance(self):
          return self.blance
acc1= account(1500,547457774753567)
# print(acc1.blance)
# print(acc1.account_no)
acc1.credit(1000)
acc1.debit(100)


