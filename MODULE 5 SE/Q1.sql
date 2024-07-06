-- 1. Create Table Name : Student and Exam
CREATE DATABASE Assignment;
USE Assignment;

CREATE TABLE Student (
Rollno INT PRIMARY KEY,
Name TEXT,
Branch TEXT
);

INSERT INTO Student VALUES
(1, "Jay", "Computer Science"),
(2, "Suhani", "Electronic and Com"),
(3, "Kriti", "Electronic and Com");

SELECT * FROM Student;

USE Assignment;

CREATE TABLE Exam (
Rollno INT,
S_code VARCHAR(10),
Marks INT,
P_code VARCHAR(10),
FOREIGN KEY Exam(Rollno) REFERENCES Student(Rollno)
);

INSERT INTO Exam VALUES
(1, "CS11", 50, "CS"),
(1, "CS12", 60, "CS"),
(2, "EC101", 66, "EC"),
(2, "EC102", 70, "EC"),
(3, "EC101", 45, "EC"),
(3, "EC102", 50, "EC")

SELECT * FROM Student;
SELECT * FROM Exam;