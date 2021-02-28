select round(s.lat_n,4) from station as s
where
(select count(lat_n) from station where lat_n > s.lat_n)
=
(select count(lat_n) from station where lat_n < s.lat_n);
