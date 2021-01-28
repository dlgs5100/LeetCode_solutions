# Write your MySQL query statement below
SELECT (CASE 
    WHEN mod(id,2) = 1 AND id = counts THEN id
    WHEN mod(id,2) = 1 AND id != counts THEN id+1
    ELSE id-1 
    END) AS id, student
FROM 
    seat, (SELECT COUNT(*) AS counts FROM seat) AS counts
ORDER BY
    id;
