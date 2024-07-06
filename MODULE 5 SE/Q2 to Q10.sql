-- 2. Create table: Employee and IncentiveTable

USE Assignment;

CREATE TABLE Employee(
Employee_id INT PRIMARY KEY,
First_name TEXT,
Last_name TEXT,
Salary INT,
Joining_date VARCHAR(100),
Department TEXT
);
SELECT * FROM Employee;

INSERT INTO Employee VALUES
(1, "John", "Abraham", 1000000, "01-JAN-13 12.00.00 AM", "Banking"),
(2, "Michael", "Clarke", 800000, "01-JAN-13 12.00.00 AM", "Insurance"),
(3, "Roy", "Thomas", 700000, "01-FEB-13 12.00.00 AM", "Banking"),
(4, "Tom", "Jose", 600000, "01-FEB-13 12.00.00 AM", "Insurance"),
(5, "Jerry", "Pinto", 650000, "01-FEB-13 12.00.00 AM", "Insurance"),
(6, "Philip", "Mathew", 750000, "01-JAN-13 12.00.00 AM", "Services"),
(7, "TestName1", "123", 650000, "01-JAN-13 12.00.00 AM", "Services"),
(8, "TestName2", "Lname%", 600000, "01-FEB-13 12.00.00 AM", "Insurance"); 
SELECT * FROM Employee;

CREATE TABLE Incentive(
    Employee_ref_id INT,
    Incentive_date VARCHAR(100),
    Incentive_amount VARCHAR(10),
	FOREIGN KEY Incentive(Employee_ref_id) REFERENCES Employee(Employee_id)
);
SELECT * FROM Incentive;

INSERT INTO Incentive VALUES
(1, "01-FEB-13", "5000"),
(2, "01-FEB-13", "3000"),
(3, "01-FEB-13", "4000"),
(1, "01-JAN-13", "4500"),
(2, "01-JAN-13", "3500");
SELECT * FROM Incentive;

-- 3. Get First_Name from employee table using Tom name “Employee Name”.
SELECT First_name FROM Employee
WHERE First_name = "Tom";

-- 4. Get FIRST_NAME, Joining Date, and Salary from employee table.
SELECT First_name, Joining_date, Salary FROM Employee;

-- 5. Get all employee details from the employee table order by First_Name Ascending and Salary descending
SELECT * FROM Employee
ORDER BY First_name ASC;

SELECT * FROM Employee
ORDER BY Salary DESC;

-- 6. Get employee details from employee table whose first name contains ‘J’.
SELECT * FROM Employee
WHERE First_name LIKE "%J%";

-- 7. Get department wise maximum salary from employee table order by 
-- 8. salary ascending
SELECT Department, MAX(Salary) AS Max_Salary
FROM Employee
GROUP BY Department
ORDER BY Max_Salary ASC;

-- 9. Select first_name, incentive amount from employee and incentives table for those employees who have incentives and incentive amount greater than 3000
SELECT Employee.First_name, Incentive.Incentive_amount FROM Employee INNER JOIN Incentive ON Employee_id = Employee_ref_id
WHERE Incentive_amount > 3000;

-- 10. Create After Insert trigger on Employee table which insert records in viewtable

CREATE VIEW viewtable AS
SELECT Employee_id, First_name, Last_name, Salary, Joining_date, Department
FROM Employee;

DELIMITER $$
CREATE TRIGGER After_Insert
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
    INSERT INTO viewtable (Employee_id, First_name, Last_name, Salary, Joining_date, Department)
    VALUES (NEW.Employee_id, NEW.First_name, NEW.Last_name, NEW.Salary, NEW.Joining_date, NEW.Department);
END;
$$
DELIMITER ;

SELECT * FROM viewtable;