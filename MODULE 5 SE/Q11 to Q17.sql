-- 11. Create table : Salesperson and Customer
USE Assignment;

CREATE TABLE Salesperson (
    SNo INT PRIMARY KEY,
    SNAME TEXT,
    CITY TEXT,
    COMM FLOAT
);

INSERT INTO Salesperson VALUES
(1001, "Peel", "London", .12),
(1002, "Serres", "San Jose", .13),
(1004, "Motika", "London", .11),
(1007, "Rafkin", "Barcelona", .15),
(1003, "Axelrod", "New York", .1);

SELECT * FROM Salesperson;

CREATE TABLE Customer (
    CNM INT PRIMARY KEY,
    CNAME TEXT,
    CITY TEXT,
    RATING INT,
    SNo INT
);

INSERT INTO Customer VALUES
(201, "Hoffman", "London", 100, 1001),
(202, "Giovanne", "Roe", 200, 1003),
(203, "Liu", "San Jose", 300, 1002),
(204, "Grass", "Barcelona", 100, 1002),
(206, "Clemens", "London", 300, 1007),
(207, "Pereira", "Roe", 100, 1004);

-- 12. Retrieve the below data from above table

SELECT * FROM Customer;

-- 13. All orders for more than $1000.

SELECT * FROM Customer
WHERE SNo > 1000;

-- 14. Names and cities of all salespeople in London with commission above 0.12

SELECT * FROM Salesperson
WHERE COMM >= .12 AND  CITY = "London"; 

-- 15. All salespeople either in Barcelona or in London

SELECT * FROM Salesperson
WHERE CITY = "Barcelona" OR CITY = "London";

-- 16. All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).

SELECT * FROM Salesperson
WHERE COMM BETWEEN 0.10 AND 0.12;

-- 17. All customers excluding those with rating <= 100 unless they are located in Roe

SELECT * FROM Customer 
WHERE (RATING > 100 OR CITY = 'Roe');