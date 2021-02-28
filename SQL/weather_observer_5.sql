-- select min(city), length(min(city)) from station order by city asc;
-- select min(city), length(min(city)) from station;
-- select min(city), length(min(city)) from station where city in (select city from station where length(city) = (select length(min(city)) from station));
-- select max(city), length(max(city)) from station order by city desc;
-- select min(city), length(min(city)) from station where length(city) = (select length(max(city)) from station);


select city c, length(city) l from station order by l desc, c asc limit 1;
select city c, length(city) l from station order by l asc, c asc limit 1;
