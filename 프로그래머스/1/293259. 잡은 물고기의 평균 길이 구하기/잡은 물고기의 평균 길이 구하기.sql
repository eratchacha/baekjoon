-- 코드를 작성해주세요
SELECT ROUND(sum(ifnull(length, 10)) / count(*) , 2) AS average_length FROM FISH_INFO