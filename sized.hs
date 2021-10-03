module Sized where

import TwoFour

-- MODIFY BELOW THIS LINE

class Sized t where
    size :: t -> Int

instance Sized [a] where
    size list = length(list)

instance Sized (TwoFourTree a) where
    size Nil = 0
    size (TwoNode _ tree1 tree2) = 1 + size tree1 + size tree2
    size (ThreeNode _ _ tree1 tree2 tree3) = 2 + size tree1 + size tree2 + size tree3
    size (FourNode _ _ _ tree1 tree2 tree3 tree4) = 3 + size tree1 + size tree2 + size tree3 + size tree4
