
select round(max((abs((select min(lat_n) from station) - (select max(lat_n) from station)) +
abs((select min(long_w) from station) - (select max(long_w) from station)))),4) 
from station;


SELECT ROUND(ABS(MIN(LAT_N)-MAX(LAT_N))+ABS(MIN(LONG_W)-MAX(LONG_W)),4)
FROM STATION;
