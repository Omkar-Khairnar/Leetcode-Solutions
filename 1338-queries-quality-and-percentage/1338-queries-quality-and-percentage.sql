# Write your MySQL query statement below
SELECT q.query_name, ROUND(AVG(rating/position),2) as quality, 
ROUND((SUM(CASE WHEN rating<3 then 1 else 0 end)/COUNT(*))*100,2) as poor_query_percentage 
FROM Queries as q Where q.query_name IS NOT NULL
GROUP BY query_name
