-- Code for CS 352 HW 2
-- Author: Kai Vickers

module Sized where

import TwoFour

-- MODIFY BELOW THIS LINE

-- Defines a typeclass Sized t
class Sized t where
    size :: t -> Int

-- Implementation of Sized for polymorphic lists that returns 
-- the length of the list.
instance Sized [a] where
    size list = length(list)

-- Implementation of Sized for polymorphic TwoFourTress that returns 
-- the number of data elements in the tree.
instance Sized (TwoFourTree a) where
    size Nil = 0    -- For Nil nodes, 0 is returned

    -- For each node variant it returns the number of data elements plus
    -- the size of the each of the tree nodes.
    size (TwoNode _ node node2) = 
        1 + size node + size node2

    size (ThreeNode _ _ node node2 node3) = 
        2 + size node + size node2 + size node3

    size (FourNode _ _ _ node node2 node3 node4) = 
        3 + size node + size node2 + size node3 + size node4
