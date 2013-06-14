-- 2.51
unique :: (a -> Bool) -> [a] -> Bool
unique p xs = length (filter p xs) == 1

-- 2.52
parity :: [Bool] -> Bool
parity [] = True
parity xs = rem (length (filter (== True) xs)) 2 == 0

-- 2.53
evenNR :: (a -> Bool) -> [a] -> Bool
evenNR p xs = parity (map p xs)