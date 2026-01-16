-- 175 of Leetcode COmbine two Tables


-- we use LEFT Join

select firstName, lastName, city, state from Person LEFT JOIN Address on Person.personID = Address.personID;