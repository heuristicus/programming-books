-- 3.2
--P => Q, P => (Q => R)
--1. P => Q prep {1}
--2. P => (Q => R) prep {2}
--3. | P Hypothesis {3}
--4. | Q => elim1,3 {1,3}
--5. | Q => R =>elim2,4 {1,2,3}
--6. | R => elim4,5 {1,2,3}
--7. P => R =>intro3,6 {1,2}

-- 3.5
-- 1.

--(P <=> Q) => ((P => R) <=> (Q => R))
--1. P <=> Q prep {1}
--2. P => Q <=>elim1 {1}
--3. Q => P <=>elim1 {1}
--4. | P => R Hypothesis {4}
--5. | | P Hypothesis {4,5}
--6. | | R =>elim4,5 {4,5}
--7. | | Q =>elim2,5 {1,4,5}
--8. | Q => R =>intro6,7 {1,4}
--9. | Q => R Hypothesis {9}
--10. | | Q Hypothesis {9,10}
--11. | | R =>elim9,10 {9,10}
--12. | | P =>elim3,10 {1,9,10}
--13. | P => R =>intro11,12 {1,9}
--14. (P => R) <=> (Q => R) <=>intro8,13 {1}

-- 2.  
--(P <=> Q) => ((R => P) <=> (R => Q)) 
-- Same as above, just assume
-- R => P on line 4 and continue, assume R => Q on line 9