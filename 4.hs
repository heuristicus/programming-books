-- 4.46
reverse' :: [a] -> [a]
reverse' [] = []
reverse' (x:xs) = reverse' xs ++ [x]

-- 4.47
splitList :: [a] -> [([a],[a])]
splitList [x,y] = [([x],[y])]
splitList (x:y:zs) = ([x],y:zs) : addLeft x (splitList (y:zs)) where 
  addLeft u [] = []
  addLeft u ((vs,ws):rest) = (u:vs,ws) : addLeft u rest
