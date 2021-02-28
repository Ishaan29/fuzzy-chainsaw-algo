select c.name from city c join country cc on c.countrycode = cc.code where cc.continent = 'Africa';
