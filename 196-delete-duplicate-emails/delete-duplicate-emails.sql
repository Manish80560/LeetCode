# Write your MySQL query statement below

-- DELETE p1
-- FROM Person p1
-- JOIN Person p2
-- ON p1.email = p2.email
-- AND p1.id > p2.id;

delete from person where id not in(
select id from( select id, email, Row_number() over(partition by email order by id ) as rn
from Person ) as p where rn=1);
