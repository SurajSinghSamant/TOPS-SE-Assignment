USE Assignment;

CREATE TABLE Products (
    PRO_ID INT PRIMARY KEY,
    PRO_NAME TEXT,
    PRO_PRICE FLOAT,
    PRO_COM INT
);

INSERT INTO Products VALUES
(101, "Mother Board", 3200.00, 15),
(102, "Key Board", 450.00, 16),
(103, "ZIP drive", 250.00, 14),
(104, "Speaker", 550.00, 16),
(105, "Monitor", 5000.00, 11),
(106, "DVD drive", 900.00, 12),
(107, "CD drive", 800.00, 12),
(108, "Printer", 2600.00, 13),
(109, "Refill cartridge", 350.00, 13),
(110, "Mouse", 250.00, 12);

SELECT * FROM products;

/* From the table, write a SQL query to select a range of products whose price is in the range Rs.200 to Rs.600. Begin and end
values are included. Return pro_id, pro_name, pro_price, and pro_com. */

SELECT * FROM Products 
WHERE PRO_PRICE  BETWEEN 200 AND 600;

-- 21. From the table, write a SQL query to calculate the average
-- price for a manufacturer code of 16. Return avg.

SELECT AVG(PRO_PRICE) FROM Products
WHERE PRO_COM = 16; 

-- 22. From the table, write a SQL query to display the pro_name
-- as 'Item Name' and pro_priceas 'Price in Rs.'

SELECT PRO_NAME AS 'Item Name', PRO_PRICE AS 'Price in Rs.'
FROM Products
WHERE PRO_PRICE >= 250;

/* 23. From the table, write a SQL query to find the items whose
prices are higher than or equal to $250. Order the result by product price in
descending, then product name in ascending. Return pro_name and
pro_price. */

SELECT PRO_NAME, PRO_PRICE
FROM Products
WHERE PRO_PRICE >= 250
ORDER BY PRO_PRICE DESC, PRO_NAME ASC;

-- 24. From the table, write a SQL query to calculate average price of 
-- the items for each company. Return average price and companycode.

SELECT AVG(PRO_PRICE) AS averageprice, PRO_COM AS comapanycode FROM Products 
GROUP BY PRO_COM;


