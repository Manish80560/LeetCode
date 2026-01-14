# Write your MySQL query statement below
-- select name as employee from Employee where salary > (select max(salary) from employee);

SELECT e.name AS Employee
FROM Employee e
JOIN Employee m
ON e.managerId = m.id
WHERE e.salary > m.salary;
