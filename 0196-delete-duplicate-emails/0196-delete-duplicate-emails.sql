# Write your MySQL query statement below
-- DELETE FROM Person WHERE id NOT IN (SELECT t.id FROM (SELECT min(id) as id FROM Person GROUP BY email)as t)
DELETE p1 FROM Person p1, Person p2 WHERE p1.email = p2.email AND p1.id > p2.id;