-- Code for CS 352 HW 2
-- Author: Kai Vickers

module TwoFour (
    TwoFourTree(..),
    sampleTree
) where

-- MODIFY BELOW THIS LINE

-- Defines a TwoFourTree type that is polymorphic over its element type.
-- Is comprised of contructors for each node variant, including Nil.
data TwoFourTree a = Nil
                    | TwoNode a (TwoFourTree a) (TwoFourTree a) 
                    | ThreeNode a a (TwoFourTree a) (TwoFourTree a) (TwoFourTree a)
                    | FourNode a a a (TwoFourTree a) (TwoFourTree a) (TwoFourTree a) (TwoFourTree a)
    deriving (Show)

-- Creates a sample tree that contains 4 non-nil tree nodes with a total of 8 data elements
sampleTree =  ThreeNode 2 7 (TwoNode 0 Nil Nil) (ThreeNode 3 5 Nil Nil Nil) (FourNode 6 10 13 Nil Nil Nil Nil)