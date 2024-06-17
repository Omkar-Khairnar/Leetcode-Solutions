# Write your MySQL query statement below
select p.product_id, IFNULL(ROUND(sum(p.price*u.units)/sum(u.units),2),0) as average_price FROM
Prices as p LEFT JOIN UnitsSold as u ON p.product_id = u.product_id
WHERE u.purchase_date BETWEEN p.start_date and p.end_date or u.product_id IS NULL
GROUP BY p.product_id;