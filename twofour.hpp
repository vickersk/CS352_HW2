// Code for CS 352 HW 2
// Author: Kai Vickers

#pragma once

// TwoFourTree abstract base class, that is generic
// over its element type
template<typename T>
struct TwoFourTree {

    // Returns the size of a TreeFourTree (number of data elements)
    virtual const int size() const = 0;

};

// TwoNode subclass that inherits from TwoFourTree
template<typename T>
struct TwoNode : public TwoFourTree<T>{
private:
    T data; // Single data element

    // Child nodes:
    TwoFourTree<T>* node;
    TwoFourTree<T>* node2;

public:

    // Creates a TwoNode from a single data element, sets child nodes to nullptr
    TwoNode(const T& v) : data(v), node(nullptr), node2(nullptr) {}
    
    // Creates a TwoNode from a single data element and two existing TwoFourTrees
    TwoNode(const T& v, TwoFourTree<T>* n, TwoFourTree<T>* n2) : data(v), node(n), node2(n2) {}

    // Returns the size of a TreeFourTree (number of data elements)
    // by calling size on child nodes if they aren't set to nullptr
    const int size() const override {
        int currentSize = 1;

        // Checks if each child node is not nullptr
        if (node) {
            currentSize += node->size();
        }

        if (node2) {
            currentSize += node2->size();
        }

        return currentSize;
    }
};

// ThreeNode subclass that inherits from TwoFourTree
template<typename T>
struct ThreeNode : public TwoFourTree<T>{
private:
    // Data elements:
    T data;
    T data2;

    // Child nodes:
    TwoFourTree<T>* node;
    TwoFourTree<T>* node2;
    TwoFourTree<T>* node3;

public:

    // Creates a ThreeNode from a two data elements, sets child nodes to nullptr
    ThreeNode(const T& v, const T& v2) : data(v), data2(v2), node(nullptr), node2(nullptr), node3(nullptr) {}
    
    // Creates a ThreeNode from a two data element and three existing TwoFourTrees
    ThreeNode(const T& v, const T& v2, TwoFourTree<T>* n, TwoFourTree<T>* n2, TwoFourTree<T>* n3) : 
        data(v), data2(v2), node(n), node2(n2), node3(n3) {}

    // Returns the size of a TreeFourTree (number of data elements)
    // by calling size on child nodes if they aren't set to nullptr
    const int size() const override {
        int currentSize = 2;

        // Checks if each child node is not nullptr
        if (node) {
            currentSize += node->size();
        }

        if (node2) {
            currentSize += node2->size();
        }

        if (node3) {
            currentSize += node3->size();
        }

        return currentSize;
    }

};

// ThreeNode subclass that inherits from TwoFourTree
template<typename T>
struct FourNode : public TwoFourTree<T>{
private:
    // Data elements:
    T data;
    T data2;
    T data3;

    // Child nodes:
    TwoFourTree<T>* node;
    TwoFourTree<T>* node2;
    TwoFourTree<T>* node3;
    TwoFourTree<T>* node4;

public:

    // Creates a FourNode from a three data elements, sets child nodes to nullptr
    FourNode(const T& v, const T& v2, const T& v3) : 
        data(v), data2(v2), data(v3), node(nullptr), node2(nullptr), node3(nullptr), node4(nullptr) {}
    
    // Creates a FourNode from a three data element and four existing TwoFourTrees
    FourNode(const T& v, const T& v2, const T& v3, TwoFourTree<T>* n, 
        TwoFourTree<T>* n2, TwoFourTree<T>* n3, TwoFourTree<T>* n4) : 
        data(v), data2(v2), data3(v3), node(n), node2(n2), node3(n3), node4(n4) {}

    // Returns the size of a TreeFourTree (number of data elements)
    // by calling size on child nodes if they aren't set to nullptr
    const int size() const override {
        int currentSize = 3;

        // Checks if each child node is not nullptr
        if (node) {
            currentSize += node->size();
        }

        if (node2) {
            currentSize += node2->size();
        }

        if (node3) {
            currentSize += node3->size();
        }

        if (node4) {
            currentSize += node4->size();
        }

        return currentSize;
    }

};