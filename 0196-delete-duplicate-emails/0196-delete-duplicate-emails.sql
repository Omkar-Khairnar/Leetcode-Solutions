# Write your MySQL query statement below
DELETE FROM Person WHERE id NOT IN (SELECT t.id FROM (SELECT min(id) as id FROM Person GROUP BY email)as t)