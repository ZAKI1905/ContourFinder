#ifndef MemFuncWrapper_H
#define MemFuncWrapper_H

#include <iostream>
#include "Func2D.h"


namespace CONFIND
{
//==============================================================
template<typename FuncObj, typename MemFuncPtr >
class MemFuncWrapper : public Func2D
{

  public:
    MemFuncWrapper(FuncObj & obj, MemFuncPtr memFn) : fObj(&obj), fMemFunc( memFn ) {}
    MemFuncWrapper(const MemFuncWrapper &mfw2) : fMemFunc(mfw2.fMemFunc)
    {
      // std::cout << "MemFuncWrapper copy constructor from " << &mfw2 << " -> " << this << " \n" ;
      fObj = new FuncObj ;

      memcpy(fObj, mfw2.fObj, sizeof(*mfw2.fObj)) ;
      cpy_const_called = true ;
    }

    ~MemFuncWrapper() 
    {
      // std::cout << " MemFuncWrap Destructor at address:" << this << ", fObj:"<< fObj << ", copy : "<< cpy_const_called << "\n" ;
      if (cpy_const_called) delete fObj;
    }

    double Eval(double x, double y) override { return ((*fObj).*fMemFunc)( x , y) ;}

    Func2D* Clone() override 
    {
      return new MemFuncWrapper(*this) ;
    } ;

  public:
    bool cpy_const_called = false ;
    FuncObj * fObj = NULL ;
    MemFuncPtr fMemFunc ;

};

}
//==============================================================
#endif /*MemFuncWrapper_H*/