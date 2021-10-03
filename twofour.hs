module TwoFour (
    TwoFourTree(..),
    sampleTree
) where

-- MODIFY BELOW THIS LINE
data TwoFourTree a = Nil 
                    | TwoNode a (TwoFourTree a) (TwoFourTree a) 
                    | ThreeNode a a (TwoFourTree a) (TwoFourTree a) (TwoFourTree a)
                    | FourNode a a a (TwoFourTree a) (TwoFourTree a) (TwoFourTree a) (TwoFourTree a)
    deriving (Show)

sampleTree =  ThreeNode 2 7 (TwoNode 0 (Nil) (Nil)) (ThreeNode 3 5 (Nil) (Nil) (Nil)) (FourNode 6 10 13 (Nil) (Nil) (Nil) (Nil))