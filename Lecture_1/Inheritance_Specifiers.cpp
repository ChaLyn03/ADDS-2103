// Base class
class Base {
public:
    int public_var;
    void public_function() {}
protected:
    int protected_var;
    void protected_function() {}
private:
    int private_var;
    void private_function() {}
};

// Public inheritance
class DerivedPublic : public Base {
public:
    void access_base_members() {
        public_var = 1; // Public members of the base class can be accessed publicly in the derived class
        protected_var = 2; // Protected members of the base class can be accessed publicly in the derived class
        //private_var = 3; // Private members of the base class are not accessible in the derived class
        public_function(); // Public functions of the base class can be accessed publicly in the derived class
        protected_function(); // Protected functions of the base class can be accessed publicly in the derived class
        //private_function(); // Private functions of the base class are not accessible in the derived class
    }
};

// Private inheritance
class DerivedPrivate : private Base {
public:
    void access_base_members() {
        public_var = 1; // Public members of the base class become private members of the derived class and can be accessed privately in the derived class
        protected_var = 2; // Protected members of the base class become private members of the derived class and can be accessed privately in the derived class
        //private_var = 3; // Private members of the base class are not accessible in the derived class
        public_function(); // Public functions of the base class become private functions of the derived class and can be accessed privately in the derived class
        protected_function(); // Protected functions of the base class become private functions of the derived class and can be accessed privately in the derived class
        //private_function(); // Private functions of the base class are not accessible in the derived class
    }
};

// Protected inheritance
class DerivedProtected : protected Base {
public:
    void access_base_members() {
        public_var = 1; // Public members of the base class become protected members of the derived class and can be accessed protectedly in the derived class
        protected_var = 2; // Protected members of the base class become protected members of the derived class and can be accessed protectedly in the derived class
        //private_var = 3; // Private members of the base class are not accessible in the derived class
        public_function(); // Public functions of the base class become protected functions of the derived class and can be accessed protectedly in the derived class
        protected_function(); // Protected functions of the base class become protected functions of the derived class and can be accessed protectedly in the derived class
        //private_function(); // Private functions of the base class are not accessible in the derived class
    }
};
