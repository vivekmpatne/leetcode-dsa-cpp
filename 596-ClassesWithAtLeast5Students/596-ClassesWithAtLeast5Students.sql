-- Last updated: 4/16/2026, 12:05:21 AM
# Write your MySQL query statement below
SELECT class from Courses 
GROUP BY class
HAVING COUNT(student) >= 5;