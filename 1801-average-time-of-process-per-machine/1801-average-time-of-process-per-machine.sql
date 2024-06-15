# Write your MySQL query statement below
select a1.machine_id, ROUND(AVG(a2.timestamp - a1.timestamp),3) as processing_time
from Activity as a1 LEFT JOIN Activity as a2 ON a1.machine_id = a2.machine_id
WHERE a2.machine_id IS NOT NULL 
and a1.process_id = a2.process_id 
and a1.activity_type ='start' and a2.activity_type ='end'
GROUP BY machine_id

