# Write your MySQL query statement below

SELECT 
stu.student_id, stu.student_name, sub.subject_name, COUNT(exam.subject_name) AS attended_exams
FROM STUDENTS AS stu
CROSS JOIN SUBJECTS AS sub
LEFT JOIN EXAMINATIONS AS exam
ON exam.student_id = stu.student_id AND sub.subject_name = exam.subject_name
GROUP BY
stu.student_id, stu.student_name, sub.subject_name
ORDER BY
stu.student_id, sub.subject_name;