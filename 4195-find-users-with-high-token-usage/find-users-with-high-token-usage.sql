# Write your MySQL query statement below
-- SELECT
--     p.user_id,
--     COUNT(*) AS prompt_count,
--     ROUND(AVG(p.tokens), 2) AS avg_tokens
-- FROM prompts p
-- GROUP BY p.user_id
-- HAVING
--     COUNT(*) >= 3
--     AND EXISTS (
--         SELECT 1
--         FROM prompts p2
--         WHERE p2.user_id = p.user_id
--           AND p2.tokens > (
--               SELECT AVG(p3.tokens)
--               FROM prompts p3
--               WHERE p3.user_id = p.user_id
--           )
--     )
-- ORDER BY
--     avg_tokens DESC,
--     user_id ASC;


# Write your MySQL query statement below

SELECT  user_id , COUNT(prompt) AS prompt_count,ROUND(AVG(tokens),2) AS avg_tokens
FROM prompts
GROUP BY user_id
HAVING COUNT(prompt) >= 3 AND MAX(tokens) > AVG(tokens) 
ORDER BY avg_tokens DESC , user_id ASC;
