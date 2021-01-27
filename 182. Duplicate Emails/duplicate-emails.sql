# Write your MySQL query statement below
SELECT Email FROM Person GROUP BY EMAIL HAVING COUNT(Email) > 1;
