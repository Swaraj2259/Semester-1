
# class student:
#     college_name="itm college"
        
#     def __init__(self,name, marks) : #__init__ is the constructors
#         self.name=name     #these both are instance attributes
#         self.marks=marks
#     def welcome(self):
#         print("welcome",self.name,self.marks)

# s1=student("shravani",23)
# #print(s1.name,s1.marks)
# s1.welcome()
# # print(student.college_name)

# s2=student("mahesh",41)
# #print(s2.name,"is the of the student and he/her marks =",s2.marks)
# # print(student.college_name)
# s2.welcome()


class student:

    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
    def get_avg(self):
        sum=0
        for val in self.marks:
            sum+= val
        print(self.name,"your avg score is ",sum/3)


s1=student("swaraj",[79,89,99])
s1.get_avg()

        


































