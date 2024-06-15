# Write your MySQL query statement below
select e.name, b.bonus from
Employee as e LEFT JOIN BONUS as b ON e.empId = b.empId
WHERE b.bonus < 1000 or b.bonus is null;