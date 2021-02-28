/*
Enter your query here.
*/

SELECT c.company_code, c.founder, 
COUNT(DISTINCT l.lead_manager_code), 
COUNT(DISTINCT sm.senior_manager_code),
COUNT(DISTINCT m.manager_code),
COUNT(DISTINCT e.employee_code) 
FROM 
company c JOIN lead_manager l ON c.company_code = l.company_code JOIN
senior_manager sm ON sm.lead_manager_code = l.lead_manager_code JOIN
manager m ON m.senior_manager_code = sm.senior_manager_code JOIN
employee e ON e.manager_code = m.manager_code
GROUP BY c.company_code, c.founder ORDER BY c.company_code ASC;
