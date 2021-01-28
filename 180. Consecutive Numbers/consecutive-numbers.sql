# Write your MySQL query statement below
SELECT DISTINCT
    t1.Num AS ConsecutiveNums
FROM 
    Logs AS t1, 
    Logs AS t2,
    Logs AS t3
WHERE
    (t1.Num = t2.Num AND t1.Id = t2.Id-1)
    AND
    (t1.Num = t3.Num AND t1.Id = t3.Id-2);
​
