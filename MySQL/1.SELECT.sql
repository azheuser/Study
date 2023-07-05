USE customers;

SELECT prod_name
FROM products;

SELECT prod_id, prod_name, prod_price
FROM products;

SELECT *
FROM products;

# 限制输出不同的行
SELECT DISTINCT vend_id
FROM products;

# 限制输出前多少行
SELECT prod_name
FROM products
LIMIT 5;

# LIMIT 开始行 行数
SELECT prod_name
FROM products
LIMIT 0, 5;
# LIMIT 5 OFFSET 0
