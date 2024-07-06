-- 18. Write a SQL statement that displays all the information about all Salespeople

USE Assignment;

CREATE TABLE Salespeople(
    salesman_id INT,
    name TEXT,
    city TEXT,
    commission FLOAT
);

INSERT INTO Salespeople VALUES
(5001, "James Hoog", "New York", 0.15),
(5002, "Nail Knite", "Paris", 0.13),
(5005, "Pit Alex", "London", 0.11),
(5006, "Mc Lyon", "Paris", 0.14),
(5007, "Paul Adam", "Rome", 0.13),
(5003, "Lauson Hen", "San Jose", 0.12);

SELECT * FROM Salespeople ;