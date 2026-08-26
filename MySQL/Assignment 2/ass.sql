CREATE TABLE Member(
    Member_Id NUMBER,
    Member_Name VARCHAR2(30),
    Membership_Type VARCHAR2(20),
    Max_Books_Allowed NUMBER,
    Penalty_Amount NUMBER
);


CREATE TABLE Books(
    Book_No NUMBER,
    Book_Name VARCHAR2(50),
    Author_Name VARCHAR2(50),
    Category VARCHAR2(20),
    Price NUMBER
);


CREATE TABLE Issue(
    Lib_Issue_Id NUMBER,
    Book_No NUMBER,
    Member_Id NUMBER,
    Issue_Date DATE,
    Return_Date DATE
);


DESC Member;
DESC Books;
DESC Issue;


DROP TABLE Member;


CREATE TABLE Member(
    Member_Id NUMBER PRIMARY KEY,
    Member_Name VARCHAR2(30),
    Membership_Type VARCHAR2(20)
        CHECK (Membership_Type IN
        ('Lifetime','Annual','Half Yearly','Quarterly')),
    Max_Books_Allowed NUMBER,
    Penalty_Amount NUMBER
);


ALTER TABLE Member
MODIFY Member_Name VARCHAR2(40);


ALTER TABLE Issue
ADD Reference VARCHAR2(30);


ALTER TABLE Issue
DROP COLUMN Reference;


RENAME Issue TO Lib_Issue;


INSERT INTO Member VALUES(1,'Amit','Annual',5,100);
INSERT INTO Member VALUES(2,'Rahul','Lifetime',10,0);
INSERT INTO Member VALUES(3,'Sneha','Quarterly',3,50);
INSERT INTO Member VALUES(4,'Pooja','Half Yearly',4,75);
INSERT INTO Member VALUES(5,'Rohan','Annual',5,100);


INSERT INTO Member VALUES(6,'Kiran','Annual',5,50);
INSERT INTO Member VALUES(7,'Neha','Lifetime',10,0);
INSERT INTO Member VALUES(8,'Vikas','Quarterly',3,20);
INSERT INTO Member VALUES(9,'Anjali','Annual',5,80);
INSERT INTO Member VALUES(10,'Mahesh','Half Yearly',4,40);


ALTER TABLE Member
MODIFY Member_Name VARCHAR2(20);


ALTER TABLE Member
ADD CHECK (Max_Books_Allowed < 100);


CREATE TABLE MemberBackup AS
SELECT * FROM Member;


ALTER TABLE Member
ADD CONSTRAINT chk_books
CHECK (Max_Books_Allowed < 100);


ALTER TABLE Member
ADD CONSTRAINT chk_penalty
CHECK (Penalty_Amount <= 1000);


DROP TABLE Books;


CREATE TABLE Books(
    Book_No NUMBER PRIMARY KEY,
    Book_Name VARCHAR2(50) NOT NULL,
    Author_Name VARCHAR2(50),
    Category VARCHAR2(20)
    CHECK(Category IN
    ('System','Fiction','Database',
     'RDBMS','Others','Science')),
    Price NUMBER
);


INSERT INTO Books VALUES(101,'DBMS','Korth','Database',450);
INSERT INTO Books VALUES(102,'Oracle','Ivan','RDBMS',500);
INSERT INTO Books VALUES(103,'C Programming','Dennis','System',350);
INSERT INTO Books VALUES(104,'Physics','HC Verma','Science',400);
INSERT INTO Books VALUES(105,'Novel','ABC','Fiction',300);


INSERT INTO Books VALUES(106,'Java','James','System',550);
INSERT INTO Books VALUES(107,'SQL','Scott','Database',450);
INSERT INTO Books VALUES(108,'Networks','Tanenbaum','Others',600);
INSERT INTO Books VALUES(109,'Operating System','Galvin','System',700);
INSERT INTO Books VALUES(110,'Data Science','XYZ','Science',650);


SELECT * FROM Member;
SELECT * FROM Books;


DROP TABLE Lib_Issue;


CREATE TABLE Issue(
    Lib_Issue_Id NUMBER PRIMARY KEY,
    Book_No NUMBER,
    Member_Id NUMBER,
    Issue_Date DATE,
    Return_Date DATE,
    CONSTRAINT fk_book
    FOREIGN KEY(Book_No)
    REFERENCES Books(Book_No),
    CONSTRAINT fk_member
    FOREIGN KEY(Member_Id)
    REFERENCES Member(Member_Id)
);


INSERT INTO Issue
VALUES(7001,101,1,DATE '2006-12-01',NULL);
INSERT INTO Issue
VALUES(7002,102,2,DATE '2006-12-02',NULL);
INSERT INTO Issue
VALUES(7003,103,3,DATE '2006-12-03',NULL);
INSERT INTO Issue
VALUES(7004,104,4,DATE '2006-12-04',NULL);
INSERT INTO Issue
VALUES(7005,105,5,DATE '2006-12-05',NULL);


INSERT INTO Issue
VALUES(7006,101,999,DATE '2006-12-06',NULL);


DELETE FROM Member
WHERE Member_Id = 1;


UPDATE Issue
SET Return_Date = Issue_Date + 15
WHERE Lib_Issue_Id IN (7004,7005);


DELETE FROM Issue
WHERE Member_Id = 1
AND Issue_Date < DATE '2006-12-10';


DELETE FROM Books
WHERE Category NOT IN ('Database','RDBMS');


DROP TABLE Issue;
DROP TABLE Member;
DROP TABLE Books;