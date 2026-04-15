-- Last updated: 4/16/2026, 12:05:44 AM
# Write your MySQL query statement below
select emp.name as Employee
from Employee emp
join Employee man
on emp.managerID = man.id
where emp.salary > man.salary;