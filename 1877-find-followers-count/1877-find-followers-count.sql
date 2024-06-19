# Write your MySQL query statement below
SELECT USER_ID, COUNT(*) as followers_count FROM Followers GROUP BY user_id ORDER BY user_id;