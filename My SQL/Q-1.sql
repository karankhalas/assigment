create database assigment_1

use assigment_1

create table student(
stu_no int primary key,
name varchar(50),
branch varchar(50)
);
insert into student values
(1,"jay","computer sci"),
(2,"suhani","Electronic and Com"),
(3,"kriti","Electronic and Com")

create table exam(
rollno int,
s_code varchar(50),
marks int,
p_code varchar(50),
foreign key (rollno) references student (stu_no)
);
insert into exam values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC")

select * from student inner join exam on student.stu_no=exam.rollno;