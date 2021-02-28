select cc.continent, floor(avg(c.population)) from city c join country cc on cc.code = c.countrycode group by cc.continent;
