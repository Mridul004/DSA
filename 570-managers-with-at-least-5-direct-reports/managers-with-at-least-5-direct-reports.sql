# Write your MySQL query statement below
select
s1.name
    from employee s1 cross join employee s2
        on s1.id=s2.managerid group by s1.id having count(s2.managerid)>=5;
