# Write your MySQL query statement below
-- SELECT e.name, b.bonus
-- FROM Employee e
-- LEFT JOIN Bonus b
-- ON e.empId = b.empId
-- WHERE b.bonus < 1000 OR b.bonus IS NULL;
select e.name, 
b. bonus
from  Employee e
left join Bonus b
on e.empId = b.empId
Where b.bonus<1000
or b.bonus is null;
