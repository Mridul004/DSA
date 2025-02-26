# Write your MySQL query statement below
select
    signups.user_id,
    round(avg(if(confirmations.action="confirmed",1,0)),2) as confirmation_rate 
        from Signups left join confirmations
            on signups.user_id=confirmations.user_id
                group by user_id;