use mwf_19;

create table student(
id int primary key,
name text not null,
c_name varchar(50)
);

create table placment(
com_id int primary key,
com_name varchar(50) not null,
stu_id int,
foreign key placment(stu_id) references student(id)
);

insert into student values
(101,"ram","itc"),
(102,"het","web"),
(103,"meet","zuru")


select * from student
insert into placment values
(201,"itc","101"),
(202,"web","102")

select*from placment

-- inner join
select studnet.id,studnet.name,placment.com_name from student inner join placement on student.id=placement.stu_id;
-- with alish
select s.id,s.name,p.com_name from student as s inner join placment as p on s.id=p.stu_id; 
-- left join
select s.id,s.name,p.com_name from student as s left join placement as p on s.id=p.stu_id;

insert into placement values 
(405,"hytech solu",8)
-- right join
select s.id,s.name,p.com_name from student as s right join placement as p on s.id=p.stu_id;

-- full join
select s.id,s.name,p.com_name from student as s left join placement as p on s.id=p.stu_id
union
select s.id,s.name,p.com_name from student as s right join placement as p on s.id=p.stu_id;