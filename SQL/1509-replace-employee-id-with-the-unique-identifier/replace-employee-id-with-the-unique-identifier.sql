# Write your MySQL query statement below

SELECT empUNI.unique_id, emp.name 
FROM EmployeeUNI AS empUNI 
right JOIN Employees AS emp ON empUNI.id = emp.id;