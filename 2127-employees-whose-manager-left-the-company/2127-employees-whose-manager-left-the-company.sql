# Write your MySQL query statement below
SELECT employee_id FROM Employees WHERE salary<30000 AND employee_id IN 
(SELECT e1.employee_id from Employees as e1 LEFT JOIN Employees as e2 ON e1.manager_id = e2.employee_id 
WHERE e1.manager_id IS NOT NULL AND e2.employee_id IS NULL)
ORDER BY employee_id;