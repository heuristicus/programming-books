--
divides :: Integer -> Integer -> Bool
divides d n = rem n d == 0

ld :: Integer -> Integer 
ld n = ldf 2 n

ldf :: Integer -> Integer -> Integer
ldf k n | divides k n = k
        | k^2 > n = n
        | otherwise = ldf (k + 1) n

prime0 :: Integer -> Bool
prime0 n | n < 1 = error "not a positive integer"
         | n == 1 = False
         | otherwise = ld n == n

-- 
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
--average xs = fromInteger (sum xs) / fromInteger (length xs)

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
                             
--1.14
blowup :: String -> String
blowup "" = ""
blowup (x:xs) = x : blowup xs

--1.15, really long winded.
srtString :: [String] -> [String]
srtString [] = error "Empty list"
srtString [x] = [x]
srtString xs = minString xs : (srtString (rmvMinString xs))

rmvMinString :: [String] -> [String]
rmvMinString [] = error "Empty list"
rmvMinString [x] = []
rmvMinString (x:xs) | x == min x (minString xs) = xs
                    | otherwise = x : rmvMinString xs
                                  
minString :: [String] -> String
minString [] = error "empty list"
minString [x] = x
minString (x:xs) | x < minString xs = x
                 | otherwise = minString xs
                               
-- 1.15, proper solution

mnm :: Ord a => [a] -> a
mnm [] = error "Empty list"
mnm [x] = x
mnm (x:xs) = min x (mnm xs)

srt :: Ord a => [a] -> [a]
srt [] = []
srt xs = m : (srt (removeFrst m xs)) where m = mnm xs
                               
                                           
removeFrst :: Ord a => a -> [a] -> [a]
removeFrst m [] = error "Empty list"
removeFrst m [x] | m == x = []
removeFrst m (x:xs) | m == x = xs
                    | otherwise = x : removeFrst m xs
                                  
--
prefix :: String -> String -> Bool
prefix [] ys = True
prefix (x:xs) [] = False
prefix (x:xs) (y:ys) = (x == y) && prefix xs ys

-- 1.17
subString :: String -> String -> Bool
subString [] ys = True
subString (x:xs) [] = False
subString (x:xs) (y:ys) = ((x==y) && (prefix xs ys)) || (subString (x:xs) ys)

--
factors :: Integer -> [Integer]
factors n | n < 1 = error "non-positive argument"
          | n == 1 = []
          | otherwise = p : factors (div n p) where p = ld n
                                                    
-- 1.20
lengths :: [[a]] -> [Int]
lengths [] = error "Empty list"
lengths a = map length a

-- 1.21
sumLengths :: [[a]] -> Int
sumLengths [] = 0
sumLengths a = sum (lengths a)

-- 
primes0 :: [Integer]
primes0 = filter prime0 [2..]

ldp :: Integer -> Integer
ldp n = ldpf primes1 n

ldpf :: [Integer] -> Integer -> Integer
ldpf (p:ps) n | rem n p == 0 = p
              | p^2 > n = n
              | otherwise = ldpf ps n

primes1 :: [Integer]
primes1 = 2 : filter prime [3..]

prime :: Integer -> Bool
prime n | n < 1 = error "not positive integer"
        | n == 1 = False
        | otherwise = ldp n == n
