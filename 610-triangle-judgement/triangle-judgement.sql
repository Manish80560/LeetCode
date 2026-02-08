# Write your MySQL query statement below
-- SELECT
--     x,
--     y,
--     z,
--     CASE
--         WHEN x + y > z
--          AND x + z > y
--          AND y + z > x
--         THEN 'Yes'
--         ELSE 'No'
--     END AS triangle
-- FROM Triangle;


select x,y,z,
    case   
    when x+y > z and x+z > y and z+y >x then 'Yes'
    else 'No'
    End as triangle
from Triangle