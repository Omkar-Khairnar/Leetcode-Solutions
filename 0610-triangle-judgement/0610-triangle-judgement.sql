# Write your MySQL query statement below
SELECT t.x, t.y, t.z, 
(CASE WHEN t.x+t.y>t.z  AND t.y+t.z>t.x AND t.x+t.z>t.y  THEN 'Yes' ELSE 'No' END) as triangle
FROM Triangle as t;
