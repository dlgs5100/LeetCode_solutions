# Write your MySQL query statement below
SELECT (CASE 
    WHEN mod(id,2) = 1 AND id = t.counts THEN id
    WHEN mod(id,2) = 1 AND id != t.counts THEN id+1
    ELSE id-1 
    END) AS id, student
FROM 
    seat, (SELECT COUNT(*) AS counts FROM seat) AS t
ORDER BY
    id;
