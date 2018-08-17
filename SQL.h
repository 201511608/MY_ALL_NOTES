//SQL :: Structured Query Language 
// Content ::
//1   ::  BASIC
//2   ::  Various Syntax in SQL
//3   ::  
//4   ::  
//5   :: 
//6   ::  
//7   ::  
//8   ::  
//9   ::  
//10  ::  
//11  :: 



// C# SQL
// http://csharp.net-informations.com/dataadapter/insertcommand-oledb.htm


// 1
// BASIC
//SQL :: Structured Query Language 
//Database Management System   :: storing, manipulating and retrieving data in databases.
//Accessing and manipulating databases
//SQL is the standard language for Relational Database System.
//MySQL, MS Access, Oracle, Sybase, Informix, Postgres and SQL Server use SQL as their standard database language.
//Relational Database Management Systems (RDMS)   
// RDBMS is the basis for SQL
// The data in an RDBMS is stored in database objects which are called as tables.

CUSTOMERS TABLE
+----+----------+-----+-----------+----------+
| ID | NAME     | AGE | ADDRESS   | SALARY   |
+----+----------+-----+-----------+----------+
|  1 | Ramesh   |  32 | Ahmedabad |  2000.00 |
|  2 | Khilan   |  25 | Delhi     |  1500.00 |
|  3 | kaushik  |  23 | Kota      |  2000.00 |
|  4 | Chaitali |  25 | Mumbai    |  6500.00 |
|  5 | Hardik   |  27 | Bhopal    |  8500.00 |
|  6 | Komal    |  22 | MP        |  4500.00 |
|  7 | Muffy    |  24 | Indore    | 10000.00 |
+----+----------+-----+-----------+----------+

// Table is basically a collection of related data entries and it consists of numerous columns and rows.
// Every table is broken up into smaller entities called fields. 
// Ex : The fields in the CUSTOMERS table consist of ID, NAME, AGE, ADDRESS and SALARY
// Record is also called as a row of data.  Ex: 7 records in the above CUSTOMERS table
// A record is a horizontal entity in a table
// A column is a vertical entity in a table that contains all information associated with a specific field in a table.
// NULL value in a table is a value in a field that appears to be blank. NULL value = No value.
// NULL value is different than a zero value or a field that contains spaces.
// A field with a NULL value is the one that has been left blank during a record creation.



//SQL Commands
CREATE  :: Creates a new table
SELECT  :: Retrieves certain records from one or more tables.
INSERT  :: Creates a record.
UPDATE  :: Modifies records.
DELETE  :: Deletes records.
DROP    :: Deletes an entire table
ALTER   :: Modifies an existing database object
GRANT   :: Gives a privilege to user.
REVOKE  :: Takes back privileges granted from user.


// SQL Constraints
// Constraints are the rules enforced on data columns on a table. 
// limit the type of data
// Constraints can either be column level or table level.
NOT NULL Constraint :: nsures that a column cannot have a NULL value.
DEFAULT Constraint − Provides a default value for a column when none is specified.
UNIQUE Constraint − Ensures that all the values in a column are different. ///
PRIMARY Key − Uniquely identifies each row/record in a database table.
FOREIGN Key − Uniquely identifies a row/record in any another database table.
CHECK Constraint − The CHECK constraint ensures that all values in a column satisfy certain conditions.
INDEX − Used to create and retrieve data from the database very quickly.

//Data Integrity
Entity Integrity − There are no duplicate rows in a table
Domain Integrity − Enforces valid entries for a given column by restricting the type, the format, or the range of values.
Referential integrity − Rows cannot be deleted, which are used by other records.
User-Defined Integrity − Enforces some specific business rules that do not fall into entity, domain or referential integrity.


// Database Normalization
/ https://www.tutorialspoint.com/sql/sql-rdbms-concepts.htm
The process of efficiently organizing data in a database.
Eliminating redundant data, for example, storing the same data in more than one table.
Ensuring data dependencies make sense.
Data is logically stored. 
Normalization consists of a series of guidelines that help guide you in creating a good database structure.


// SQL is case insensitive
// SELECT and select have same meaning in SQL statements




//2
// Various Syntax in SQL

//SQL SELECT Statement
SELECT column1, column2....columnN
FROM   table_name;
//SQL DISTINCT Clause
SELECT DISTINCT column1, column2....columnN
FROM   table_name;
//SQL WHERE Clause
SELECT column1, column2....columnN
FROM   table_name
WHERE  CONDITION;
//SQL AND/OR Clause
SELECT column1, column2....columnN
FROM   table_name
WHERE  CONDITION-1 {AND|OR} CONDITION-2;
//SQL IN Clause
SELECT column1, column2....columnN
FROM   table_name
WHERE  column_name IN (val-1, val-2,...val-N);
//SQL BETWEEN Clause
SELECT column1, column2....columnN
FROM   table_name
WHERE  column_name BETWEEN val-1 AND val-2;
//SQL LIKE Clause
SELECT column1, column2....columnN
FROM   table_name
WHERE  column_name LIKE { PATTERN };
//SQL ORDER BY Clause
SELECT column1, column2....columnN
FROM   table_name
WHERE  CONDITION
ORDER BY column_name {ASC|DESC};
//SQL GROUP BY Clause
SELECT SUM(column_name)
FROM   table_name
WHERE  CONDITION
GROUP BY column_name;
//SQL COUNT Clause
SELECT COUNT(column_name)
FROM   table_name
WHERE  CONDITION;
//SQL HAVING Clause
SELECT SUM(column_name)
FROM   table_name
WHERE  CONDITION
GROUP BY column_name
HAVING (arithematic function condition);
//SQL CREATE TABLE Statement
CREATE TABLE table_name(
column1 datatype,
column2 datatype,
column3 datatype,
.....
columnN datatype,
PRIMARY KEY( one or more columns )
);

//SQL DROP TABLE Statement
DROP TABLE table_name;
//SQL CREATE INDEX Statement
CREATE UNIQUE INDEX index_name
ON table_name ( column1, column2,...columnN);
//SQL DROP INDEX Statement
ALTER TABLE table_name
DROP INDEX index_name;
//SQL DESC Statement
DESC table_name;
//SQL TRUNCATE TABLE Statement
TRUNCATE TABLE table_name;
//SQL ALTER TABLE Statement
ALTER TABLE table_name {ADD|DROP|MODIFY} column_name {data_ype};
//SQL ALTER TABLE Statement (Rename)
ALTER TABLE table_name RENAME TO new_table_name;
//SQL INSERT INTO Statement
INSERT INTO table_name( column1, column2....columnN)
VALUES ( value1, value2....valueN);
//SQL UPDATE Statement
UPDATE table_name
SET column1 = value1, column2 = value2....columnN=valueN
[ WHERE  CONDITION ];
//SQL DELETE Statement
DELETE FROM table_name
WHERE  {CONDITION};
//SQL CREATE DATABASE Statement
CREATE DATABASE database_name;
//SQL DROP DATABASE Statement
DROP DATABASE database_name;
//SQL USE Statement
USE database_name;
//SQL COMMIT Statement
COMMIT;
//SQL ROLLBACK Statement
ROLLBACK;



// 3 
// DataTypes
https://www.tutorialspoint.com/sql/sql-data-types.htm

// Operator
https://www.tutorialspoint.com/sql/sql-operators.htm


// 4
//SQL - Expressions
https://www.tutorialspoint.com/sql/sql-expressions.htm
An expression is a combination of one or more values, operators and SQL functions

	//Boolean Expressions
	SELECT * FROM TABLENAME;
	SELECT * FROM TABLENAME WHERE SALARY = 10000;

	//Numeric Expression
	 SELECT (15 + 6) AS ADDITION
	 SELECT COUNT(*) AS "RECORDS" FROM TABLENAME;   // avg(), sum(), count(),
	 
	//Date Expressions
	SELECT CURRENT_TIMESTAMP;
	SELECT  GETDATE();;


// 5
// Database
https://www.tutorialspoint.com/sql/sql-create-database.htm
Make sure you have the admin privilege before creating any database. 

	CREATE DATABASE DatabaseName;
	SHOW DATABASES;
	USE DatabaseName;


// CREATE Table
https://www.tutorialspoint.com/sql/sql-create-table.htm
CREATE TABLE table_name( 								CREATE TABLE CUSTOMERS(
   column1 datatype,										ID   INT              NOT NULL,
   column2 datatype,										NAME VARCHAR (20)     NOT NULL,
   column3 datatype,										AGE  INT              NOT NULL,
   .....													ADDRESS  CHAR (25) ,
   columnN datatype,										ADDRESS  CHAR (25) ,
   PRIMARY KEY( one or more columns )						PRIMARY KEY (ID)
);															);


DESC TABLENAME; // can verify if your table has been created successfully

// DROP or DELETE Table
https://www.tutorialspoint.com/sql/sql-drop-table.htm
	once a table is deleted then all the information available in that table will also be lost forever.
	DROP TABLE table_name;
	 DESC table_name;//  CHECK TABLE STATUS

	 
// INSERT Query
https://www.tutorialspoint.com/sql/sql-insert-query.htm
the columns in the table into which you want to insert the data
You may not need to specify the column(s) name in the SQL query if you are adding values for all the columns

INSERT INTO TABLE_NAME VALUES (value1,value2,value3,...valueN);
INSERT INTO TABLE_NAME  VALUES (1, 'Ramesh', 32, 'Ahmedabad', 2000.00 );
INSERT INTO TABLE_NAME (ID,NAME,AGE,ADDRESS,SALARY) VALUES (1, 'Ramesh', 32, 'Ahmedabad', 2000.00 );

// populate the data into a table through the select statement over another table;
// From One table to Other 
INSERT INTO first_table_name [(column1, column2, ... columnN)] 
   SELECT column1, column2, ...columnN 
   FROM second_table_name
   [WHERE condition];
   
 
// SELECT Query
https://www.tutorialspoint.com/sql/sql-select-query.htm
	SELECT statement is used to fetch the data from a database table
	which returns this data in the form of a result table. These result 
	tables are called result-sets.

	SELECT column1, column2, columnN FROM table_name;
	SELECT * FROM table_name;

// WHERE Clause
https://www.tutorialspoint.com/sql/sql-where-clause.htm
	WHERE clause is used to specify a condition 
	while fetching the data from a single table or by joining with multiple tables. 
	WHERE clause to filter the records

	SELECT column1, column2, columnN     Ex   SELECT ID, NAME, SALARY 
	FROM table_name							  FROM tablename
	WHERE [condition]						  SALARY > 2000;



// AND and OR Conjunctive Operators
https://www.tutorialspoint.com/sql/sql-and-or-clauses.htm
	AND & OR operators are used to combine multiple conditions

	SELECT column1, column2, columnN 									SELECT ID, NAME, SALARY 
	FROM table_name														FROM tablename
	WHERE [condition1] AND [condition2]...AND [conditionN];				WHERE SALARY > 2000 AND age < 25;

	SELECT column1, column2, columnN 									SELECT ID, NAME, SALARY 
	FROM table_name														FROM CUSTOMERS
	WHERE [condition1] OR [condition2]...OR [conditionN]				WHERE SALARY > 2000 OR age < 25;

// UPDATE Query
https://www.tutorialspoint.com/sql/sql-update-query.htm
	UPDATE Query is used to modify the existing records in a table

	UPDATE table_name													Ex:   UPDATE CUSTOMERS
	SET column1 = value1, column2 = value2...., columnN = valueN			  SET ADDRESS = 'Pune'
	WHERE [condition];			
	UPDATE CUSTOMERS
	Ex: SET ADDRESS = 'Pune', SALARY = 1000.00;		 // Updates all									  WHERE ID = 6;

// DELETE Query
https://www.tutorialspoint.com/sql/sql-delete-query.htm
DELETE Query is used to delete the existing records from a table
use the WHERE clause with a DELETE query to delete the selected rows, otherwise all the records would be deleted.

DELETE FROM table_name                  DELETE FROM CUSTOMERS
WHERE [condition];                       WHERE ID = 6;

DELETE FROM CUSTOMERS;


// LIKE Clause
https://www.tutorialspoint.com/sql/sql-like-clause.htm
	IKE clause is used to compare a value to similar values using wildcard operators.
	There are two wildcards used in conjunction with the LIKE operator
	The percent sign (%)  //percent sign represents zero, one or multiple characters
	The underscore (_)    //underscore represents a single number or character.

	SELECT FROM table_name
	WHERE column LIKE 'XXXX%'

	SELECT FROM table_name
	WHERE column LIKE '_XXXX_'

// TOP, LIMIT or ROWNUM Clause
https://www.tutorialspoint.com/sql/sql-top-clause.htm
TOP clause is used to fetch a TOP N number or X percent records from a table.

SELECT TOP number|percent column_name(s)
FROM table_name
WHERE [condition]

Ex:  SELECT TOP 3 * FROM table_name;
	 SELECT * FROM table_name LIMIT 3;
	 SELECT * FROM table_name WHERE ROWNUM <= 3;

// ORDER BY Clause
https://www.tutorialspoint.com/sql/sql-order-by.htm
	ORDER BY clause is used to sort the data in ascending or descending order
	based on one or more columns

	Some databases sort the query results in an ascending order by default.
	Make sure whatever column you are using to sort that column should be in the column-list

	SELECT column-list 													SELECT *
	FROM table_name 													FROM CUSTOMERS
	[WHERE condition] 													WHERE SALARY>1000
	[ORDER BY column1, column2, .. columnN] [ASC | DESC];               ORDER BY NAME, SALARY;

	SELECT * FROM CUSTOMERS 
	ORDER BY NAME DESC;

// Group By 
https://www.tutorialspoint.com/sql/sql-group-by.htm
	 to arrange identical data into groups.
	 GROUP BY clause is used in collaboration with the SELECT statement

	 
	SELECT column1, column2
	FROM table_name
	WHERE [ conditions ]
	GROUP BY column1, column2
	ORDER BY column1, column2

	EX: // Check link
	SELECT NAME, SUM(SALARY) FROM CUSTOMERS
	GROUP BY NAME;
	
// Distinct Keyword  // IMP
https://www.tutorialspoint.com/sql/sql-distinct-keyword.htm
Eliminate all the duplicate records and fetching only unique records.

	SELECT DISTINCT column1, column2,.....columnN 
	FROM table_name
	WHERE [condition]

	Ex: 
	SELECT DISTINCT SALARY 
	FROM CUSTOMERS
	ORDER BY SALARY;
	
	
// SSORTING Results
https://www.tutorialspoint.com/sql/sql-sorting-results.htm
	ORDERBY clause is used to sort the data in ascending or descending order
	based on one or more columns. 
	
	SELECT column-list 
	FROM table_name 
	[WHERE condition] 
	[ORDER BY column1, column2, .. columnN] [ASC | DESC];

	EX:
	 SELECT * FROM CUSTOMERS
	 ORDER BY NAME, SALARY;
	 
	 SELECT * FROM CUSTOMERS
	 ORDER BY NAME DESC;
	 
	 SELECT * FROM CUSTOMERS
	   ORDER BY (CASE ADDRESS
	   WHEN 'DELHI' 	 THEN 1
	   WHEN 'BHOPAL' 	 THEN 2
	   WHEN 'KOTA' 	 THEN 3
	   WHEN 'AHMADABAD' THEN 4
	   WHEN 'MP' 	THEN 5
	   ELSE 100 END) ASC, ADDRESS DESC;
   
   
//  Constraints



// Join
https://www.tutorialspoint.com/sql/sql-using-joins.htm
The SQL Joins clause is used to combine records from two or more tables in a database.