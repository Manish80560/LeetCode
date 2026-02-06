# Write your MySQL query statement below
-- SELECT 
--     teacher_id,
--     COUNT(DISTINCT subject_id) AS cnt
-- FROM Teacher
-- GROUP BY teacher_id;

select teacher_id, count(distinct subject_id) as cnt
from teacher 
group by teacher_id
