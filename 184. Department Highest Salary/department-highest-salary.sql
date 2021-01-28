# Write your MySQL query statement below
# https://stackoverflow.com/questions/3491329/group-by-with-maxdate
# Joe Meyer http://stackoverflow.com/a/14841015/632951
SELECT
    D.name AS 'Department',
    E.name AS 'Employee',
    E.Salary
FROM
    Department AS D
INNER JOIN
    (SELECT 
        t1.DepartmentId, t1.Name, t1.Salary
    FROM
        Employee as t1
    LEFT JOIN
        Employee as t2
    ON
        (t1.DepartmentId = t2.DepartmentId 
        AND
        t1.Salary < t2.Salary)
    WHERE
        t2.Salary IS NULL) AS E
ON
    D.Id = E.DepartmentId;
