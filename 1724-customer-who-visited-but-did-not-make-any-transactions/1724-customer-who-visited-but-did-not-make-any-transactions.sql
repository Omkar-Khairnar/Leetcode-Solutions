# Write your MySQL query statement below
select Visits.customer_id, COUNT(Visits.customer_id) as count_no_trans
FROM Visits
LEFT JOIN Transactions
ON Visits.visit_id = Transactions.visit_id 
WHERE Transactions.transaction_id is null
GROUP BY Visits.customer_id;
