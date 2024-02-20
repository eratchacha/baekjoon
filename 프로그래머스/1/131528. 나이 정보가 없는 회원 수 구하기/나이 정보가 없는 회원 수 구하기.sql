-- 코드를 입력하세요
select count (case when age is null then 1 end) as users from user_info
-- select count (*) as users from user_infowhere age is NULL