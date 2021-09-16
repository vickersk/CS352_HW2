module TwoFour (
    TwoFourTree(..),
    sampleTree
) where

-- MODIFY BELOW THIS LINE
data TwoFourTree p = Nil 
                    | TwoNode p (TwoFourTree p) (TwoFourTree p) 
                    | ThreeNode p p (TwoFourTree p) (TwoFourTree p) (TwoFourTree p)
                    | FourNode p p p (TwoFourTree p) (TwoFourTree p) (TwoFourTree p) (TwoFourTree p)
    deriving (Show)

sampleTree =  ThreeNode 2 7 (TwoNode 0 (Nil) (Nil)) (ThreeNode 3 5 (Nil) (Nil) (Nil)) (FourNode 6 10 13 (Nil) (Nil) (Nil) (Nil))