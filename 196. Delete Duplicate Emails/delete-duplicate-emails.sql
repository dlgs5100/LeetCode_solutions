# Write your MySQL query statement below
#1
/*
You can’t specify target table 'person' for update in FROM clause.
MySQL不允許同時更新及查詢同張表(Person)，因此透過再次查詢產生派生表，使其刪除派生表中的原始表資料。
DELETE FROM
    Person
WHERE 
    Id
NOT IN
    (SELECT MIN(Id) AS Id
     FROM
        Person
     GROUP BY
        Email);
*/
​
#2
/*
Every derived table must have its own alias.
每個生出的表都要有別名，因為巢狀查詢的結果是透過派生表進行上一級的查詢。
SELECT MIN(Id) FROM Person
*/
DELETE FROM
    Person
WHERE 
    Id
NOT IN
    (SELECT Id FROM
        (SELECT MIN(Id) AS Id
         FROM
            Person
         GROUP BY
            Email) 
     AS m);
