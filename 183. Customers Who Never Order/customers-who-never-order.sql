# Write your MySQL query statement below
SELECT 
    c.Name as Customers 
from 
    Customers as c LEFT JOIN Orders as o
on 
    c.Id = o.CustomerId
WHERE
    o.CustomerId is NULL;
