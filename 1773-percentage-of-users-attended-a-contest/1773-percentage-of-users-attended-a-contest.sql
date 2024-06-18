# Write your MySQL query statement below
select contest_id, ROUND(((COUNT(*)/(SELECT COUNT(*) FROM Users))*100),2) as percentage from Register
GROUP BY contest_id
ORDER BY percentage DESC, contest_id;
