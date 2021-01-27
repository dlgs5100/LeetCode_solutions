# Write your MySQL query statement below
SELECT 
    t1.Score AS score, 
    (SELECT
        Count(DISTINCT t2.Score)
     From
        Scores AS t2
     WHERE
        t1.Score < t2.Score
    ) +1 AS 'Rank'
From
    Scores AS t1
ORDER BY
    t1.Score DESC;
