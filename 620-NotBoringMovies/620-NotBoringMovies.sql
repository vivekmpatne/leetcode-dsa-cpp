-- Last updated: 4/16/2026, 12:05:18 AM
# Write your MySQL query statement below
select * from Cinema 
where description != 'boring'
AND id%2 = 1
order by rating desc; 