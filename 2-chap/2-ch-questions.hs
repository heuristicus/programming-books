-- Question 1
-- a
-- let area r = r * r in area 1.532 
-- b 
-- let avg [a,b,c,d] = (a+b+c+d)/4 in avg [1.23, 2.45, -6.50, 9.76]
-- c
-- let a = 1.2; b = 3.4; c = 5.6; p = 7.8; q = 9.0; x = p - 2 * q; in a + b * x + c * x * x
-- d
-- let s_area r h = pi * r * r * h where pi = 3.14159263 in s_area 5.678 1.234 -- Not really sure about this one.

-- s_area 9.765 0.864
-- s_area 5.371 9.364

-- Question 2

f x = (x + 3) `rem` 5 -- How do you do this with cases? Makes no sense to me.

-- Question 3

-- a
fac 0 = 1
fac x = x * fac(x - 1)

pick m n = (fac m)/((fac n)*(fac (m-n)))

-- b
pick' m 0 = 1
pick' m n | m < n = 0
pick' m n | m >= n = (m / n) * pick' (m - 1)  (n - 1)

-- c
pick'' m 0 = 1
pick'' m n | m >= n = (pick'' (m - 1) n) + (pick'' (m - 1) (n - 1))
pick'' m n | m < n = 0

-- Question 4
-- a
-- 4

-- b 
-- True

-- c
-- True

-- d
-- True

-- e
-- True

-- f
-- True

-- g
-- True

-- h
-- True

-- i
-- C

-- j
-- error

-- k
-- "CDE"