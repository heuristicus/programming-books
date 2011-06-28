mnmInt :: [Int] -> Int
mnmInt [] = error "Empty list"
mnmInt [x] = x
mnmInt (x:xs) = min x (mnmInt xs)

-- 1.9
maxInt :: [Int] -> Int
maxInt [] = error "Empty list"
maxInt [x] = x
maxInt (x:xs) = max x (maxInt xs)

max' x y | x >= y = x
         | otherwise = y
                       
-- 1.10
removeFst :: Int -> [Int] -> [Int]
removeFst m [] = error "Empty list"
removeFst m [x] | m == x = []
                | otherwise = [x]
removeFst m (x:xs) | m == x = xs
                   | otherwise = x : removeFst m xs

--
srtInts :: [Int] -> [Int]
srtInts [] = []
srtInts xs = m : (srtInts (removeFst m xs)) where m = mnmInt xs
                                                  
srtInts' :: [Int] -> [Int]
srtInts' [] = []
srtInts' xs = let 
  m = mnmInt xs 
  in m : (srtInts' (removeFst m xs))
     
--average :: [Int] -> Float
--average [] = error "Empty list"
--average xs = fromInt (sum xs) / fromInt (length xs)

sum' :: [Int] -> Int
sum' [] = error "Empty list"
sum' (x:xs) = x + sum' xs

length' :: [a] -> Int
length' [] = 0
length' (x:xs) = 1 + length' xs

--1.13
count :: Char -> String -> Int
count c "" = 0
count c (x:xs) | c == x = 1 + count c xs
               | otherwise = count c xs