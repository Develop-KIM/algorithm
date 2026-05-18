select ROUND(AVG(DAILY_FEE)) as AVERAGE_FEE
from car_rental_company_car
where car_type = 'SUV';