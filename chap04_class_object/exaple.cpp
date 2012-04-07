class A {
    friend class B;
    int a;
};
 
class B {
};
 
class C : public B {
 
    void f(A* p) { // p->a = 2; }
};
