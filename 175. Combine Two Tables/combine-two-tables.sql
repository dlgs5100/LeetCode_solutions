# Write your MySQL query statement below
SELECT p.FirstName, p.LastName, a.City, a.State 
From Person as p Left Join Address as a 
on p.PersonId = a.PersonId
