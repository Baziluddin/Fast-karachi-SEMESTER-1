CREATE TABLE employees (
    employee_id NUMBER(6) PRIMARY KEY,
    first_name VARCHAR2(50),
    last_name VARCHAR2(50) NOT NULL,
    job_id VARCHAR2(10) NOT NULL,
    department_id NUMBER(4),
    salary NUMBER(8,2)
);

INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (101, 'John', 'Doe', 'ACCT_CLRK', 10, 4500);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (102, 'Jane', 'Smith', 'HR_REP', 50, 5000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (103, 'Mark', 'Jones', 'IT_PROG', 60, 6000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (104, 'Sarah', 'Lee', 'MGR_SLS', 30, 12000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (105, 'Emma', 'Brown', 'FIN_ANA', 90, 8000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (106, 'Michael', 'Taylor', 'R_D_ENG', 20, 10000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (107, 'Lucas', 'Clark', 'MKT_DIR', 70, 14000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (108, 'Olivia', 'Johnson', 'OPS_MGR', 40, 13000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (109, 'Noah', 'Williams', 'LEGAL_AD', 80, 9000);
INSERT INTO employees (employee_id, first_name, last_name, job_id, department_id, salary) VALUES (110, 'Ava', 'Davis', 'FIN_CTRL', 100, 15000);

CREATE TABLE jobs (
    job_id VARCHAR2(10) PRIMARY KEY,
    job_title VARCHAR2(35),
    min_salary NUMBER(8,2),
    max_salary NUMBER(8,2)
);

INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('ACCT_CLRK', 'Accounting Clerk', 3000, 6000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('HR_REP', 'HR Representative', 4000, 8000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('IT_PROG', 'IT Programmer', 5000, 10000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('MGR_SLS', 'Sales Manager', 7000, 15000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('FIN_ANA', 'Financial Analyst', 6000, 12000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('R_D_ENG', 'Research Engineer', 6500, 13000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('MKT_DIR', 'Marketing Director', 8000, 16000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('OPS_MGR', 'Operations Manager', 7000, 14000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('LEGAL_AD', 'Legal Advisor', 7500, 15000);
INSERT INTO jobs (job_id, job_title, min_salary, max_salary) VALUES ('FIN_CTRL', 'Financial Controller', 9000, 18000);
__1
select * from employees;
__2
select FIRST_NAME,LAST_NAME,salary,DEPARTMENT_ID,EMPLOYEE_ID,job_id
from EMPLOYEES
where SALARY > 10000;
__3
update employees
set salary = salary + 500
where employee_id = 101;

__4
delete from employees
where employee_id = 108;

__5
select * from  employees
where employee_id <= 105;

__6
insert into employees(employee_id,first_name,last_name,job_id,department_id,salary) values(111,'Charle','Adams','IT_PROG',60,7500);

__7
select first_name,last_name,salary
from employees
order by salary DESC;

__8
select job_title 
from jobs 

select * from employees;





