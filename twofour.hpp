// MODIFY THIS FILE
#pragma once

template<typename T>
struct TwoFourTree {

    virtual const int size() const = 0;

};

template<typename T>
struct TwoNode : public TwoFourTree<T>{
private:
    T value;
    TwoFourTree<T>* tree;
    TwoFourTree<T>* tree2;

public:
    TwoNode(const T& v) : value(v), tree(nullptr), tree2(nullptr) {}
    
    TwoNode(const T& v, TwoFourTree<T>* t, TwoFourTree<T>* t2) : value(v), tree(t), tree2(t2) {}

    const int size() const override {
        int currentSize = 1;

        if (tree) {
            currentSize += tree->size();
        }

        if (tree2) {
            currentSize += tree2->size();
        }

        return currentSize;
    }
};

template<typename T>
struct ThreeNode : public TwoFourTree<T>{
private:
    T value;
    T value2;
    TwoFourTree<T>* tree;
    TwoFourTree<T>* tree2;
    TwoFourTree<T>* tree3;

public:
    ThreeNode(const T& v, const T& v2) : value(v), value2(v2), tree(nullptr), tree2(nullptr), tree3(nullptr) {}
    
    ThreeNode(const T& v, const T& v2, TwoFourTree<T>* t, TwoFourTree<T>* t2, TwoFourTree<T>* t3) : value(v), value2(v2), tree(t), tree2(t2), tree3(t3) {}

    const int size() const override {
        int currentSize = 2;

        if (tree) {
            currentSize += tree->size();
        }

        if (tree2) {
            currentSize += tree2->size();
        }

        if (tree3) {
            currentSize += tree3->size();
        }

        return currentSize;
    }

};

template<typename T>
struct FourNode : public TwoFourTree<T>{
private:
    T value;
    T value2;
    T value3;
    TwoFourTree<T>* tree;
    TwoFourTree<T>* tree2;
    TwoFourTree<T>* tree3;
    TwoFourTree<T>* tree4;

public:
    FourNode(const T& v, const T& v2, const T& v3) : value(v), value2(v2), value(v3), tree(nullptr), tree2(nullptr), tree3(nullptr), tree4(nullptr) {}
    
    FourNode(const T& v, const T& v2, const T& v3, TwoFourTree<T>* t, TwoFourTree<T>* t2, TwoFourTree<T>* t3, TwoFourTree<T>* t4) : value(v), value2(v2), value3(v3), tree(t), tree2(t2), tree3(t3), tree4(t4) {}

    const int size() const override {
        int currentSize = 3;

        if (tree) {
            currentSize += tree->size();
        }

        if (tree2) {
            currentSize += tree2->size();
        }

        if (tree3) {
            currentSize += tree3->size();
        }

        if (tree4) {
            currentSize += tree4->size();
        }

        return currentSize;
    }

};