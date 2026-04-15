-- Last updated: 4/16/2026, 12:05:23 AM
# Write your MySQL query statement below

select customer_number from Orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC
LIMIT 1;