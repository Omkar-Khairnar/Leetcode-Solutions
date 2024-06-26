# Write your MySQL query statement below
SELECT s.student_id, s.student_name, sb.subject_name, COUNT(e.student_id) AS attended_exams  FROM
Students as s CROSS JOIN Subjects as sb LEFT JOIN Examinations as e ON s.student_id = e.student_id and sb.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, sb.subject_name
ORDER BY s.student_id, sb.subject_name;