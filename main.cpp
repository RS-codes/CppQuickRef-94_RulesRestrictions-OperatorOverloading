94 _ Rules and Restrictions for Operator Overloading in C++

//1. PRECEDENCE of the operator CANNOT be altered
    // Eg: if we've the operators + and * , 
    //the operator * has the higher precedence always, 
    //it CANNOT be altered
//2. CANNOT alter the no.of OPERANDS the UNARY operator takes.
    //Eg: Unary operator operates on ONLY ONE OPERAND, it cant be altered.
 // BUT, if an operator works on two or more operands,
    //THEN some of the operands CAN be IGNORED.
//3. Except the ftn.call operator(), any operator can have the DEFAULT parameter.
 the above statement is Ambiguous
//4. Some operators CANNOT BE OVERLOADED, they are
 // ternary ? ,scope resolution ::,  dot star  .*, and dot . operators 
 
//5. Except the = operator, operator ftn is inherited by any derived class.
 //i.e., if u've overloaded any operator in the Base class,
 //and if u inherit the class, then the Derived class will also 
 //have the overloaded operator.
    //If u want to change the definition or overload the operator again in the 
    //derived class, u can do that. 
 
//6. When u overload an operator, the MEANING of the operator MUST NOT BE CHANGED/Disturbed.
