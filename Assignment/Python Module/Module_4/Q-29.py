#  What relationship is appropriate for Course and Faculty?
 
class Faculty:
    def __init__(self, name):
        self.name = name

class Course:
    def __init__(self, title):
        self.title = title

faculty_member = Faculty("Mr. Brijesh")

course = Course("Python Developer")

print(f"Faculty: {faculty_member.name}")
print(f"Course: {course.title}")
