select name from STUDENTS where marks > 75 order by SUBSTRING(name , -3, length(name)),id;
