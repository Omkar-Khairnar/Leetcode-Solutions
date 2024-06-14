# Write your MySQL query statement below
select w1.id from Weather as w1 LEFT JOIN Weather as w2
ON (w1.recordDate = DATE_ADD(w2.recordDate, INTERVAl 1 DAY))
where w1.temperature > w2.temperature;