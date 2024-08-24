#   What relationship is appropriate for Student and Person?

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Student(Person):
    def __init__(self, name, age, student_id):
        
        super().__init__(name, age)
        self.student_id = student_id

student = Student("Kaushik", 22, "3413")

print("Name:", student.name)
print("Age:", student.age)
print("Student ID:", student.student_id)
