create database transport;
use transport;
create table bus 
(bus_id int(5) primary key, 
bus_route char(20) , 
bus_charge int(5)
);
create table pasger (
p_id int(5) ,  
p_name char(20),
bus_id int(5) primary key foreign key references bus(bus_route) 
);
create table reservation (
r_no int(5) not null, 
r_type char(20), 
r_date int(10) default 111122);                       
create table ticket (
t_no int(5), 
t_price int(6), 
th_name char(20)
);
show tables;
insert into bus values(101,"MDCL-SEC",35),(102,"MDCL-PTCH",48),(103,"MDCL-HYTN",70),
(104,"HYD-MBNR",140),(105,"MBNR-HYD",440),(106,"MBNR-KHM",690),(107,"MDCL-KDKL",3400);
select * from pasger;
drop table bus;
insert into pasger(p_id,p_name) values (1001,"Ramu"),(1002,"Ravi"),(1003,"Raju"),
(1004,"Raki"),(1005,"Rafi"),(1006,"Rasi"),(1007,"Rani");



                        
                      