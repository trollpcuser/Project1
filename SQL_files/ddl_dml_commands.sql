create database car;
use car;
create table car_info
(
    sl_no int,
    Est_year int,
    capacity int,
    fuel_type varchar(10),
    model_name varchar(30)
);
show tables;
alter table car_info add gearno int;
select * from car_info;
insert into car_info (sl_no,Est_year, capacity,fuel_type,model_name,gearno) values(1,1992,4,'petrol','Benz 123',2);
insert into car_info (sl_no,Est_year, capacity,fuel_type,model_name,gearno) values(2,1995,2,'diseal','Benz 45',3);
insert into car_info (sl_no,Est_year, capacity,fuel_type,model_name,gearno) values(3,2000,7,'cng','Benz 67',5);
insert into car_info (sl_no,Est_year, capacity,fuel_type,model_name,gearno) values(4,1998,4,'petrol','Benz 89',1);
insert into car_info (sl_no,Est_year, capacity,fuel_type,model_name,gearno) values(5,1990,5,'gas','Benz 0',4);
select * from car_info;
start transaction;
delete from car_info where est_year=1990;
commit;
select * from car_info;
/*drop table car_info;
drop database car;
show databases;*/


