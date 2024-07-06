-- 19. From the following table, write a SQL query to find orders that are delivered by a salesperson with ID. 5001. Return ord_no, ord_date, purch_amt.

USE Assignment;

CREATE TABLE Orders (
   ord_no INT,
   purch_amt FLOAT,
   ord_date DATE,
   customer_id INT,
   salesman_id INT
);

INSERT Orders VALUES
(70001, 150.5, "2012-10-05", 3005, 5002),
(70009, 270.65, "2012-09-10", 3001, 5005),
(70002, 65.26, "2012-10-05", 3002, 5001),
(70004, 110.5, "2012-08-17", 3009, 5003),
(70007, 948.5, "2012-09-10", 3005, 5002),
(70005, 2400.6, "2012-07-27", 3007, 5001),
(70008, 5760, "2012-09-10", 3002, 5001),
(70010, 1983.43, "2012-10-10", 3004, 5006),
(70003, 2480.4, "2012-10-10", 3009, 5003),
(70012, 250.45, "2012-06-27", 3008, 5002),
(70011, 75.29, "2012-08-17", 3003, 5007),
(70013, 3045.2, "2012-04-25", 3002, 5001);

SELECT ord_no, ord_date, purch_amt FROM Orders
WHERE salesman_id = 5001;

