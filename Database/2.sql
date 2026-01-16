-- 181 of sql in leetcode Employees Earning More Than Their Managers

-- we use SELF JOIN to perform 2 logical operations here 

-- // PseudoCode
-- if (managerId exists) {
--     if (employee_salary > manager_salary) {
--         print(employee);
--     }
-- }


select e.name AS Employee 
FROM 
Employee e
JOIN Employee m
on e.managerId=m.id
where e.salary>m.salary