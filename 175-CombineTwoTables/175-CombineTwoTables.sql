-- Last updated: 4/16/2026, 12:05:46 AM
# Write your MySQL query statement below
select var_p.firstName,
       var_p.lastName,
       var_a.city,
       var_a.state
from Person var_p
left join Address var_a
on var_p.personID = var_a.personID;