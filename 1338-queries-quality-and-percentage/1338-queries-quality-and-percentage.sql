# Write your MySQL query statement below
SELECT q.query_name, ROUND(AVG(rating/position),2) as quality, 
ROUND(((SELECT COUNT(*) FROM Queries WHERE rating<3 AND query_name=q.query_name)/(SELECT COUNT(*) FROM Queries WHERE query_name=q.query_name))*100,2) as poor_query_percentage 
FROM Queries as q Where q.query_name IS NOT NULL
GROUP BY query_name
