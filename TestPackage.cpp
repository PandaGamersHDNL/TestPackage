//---------------------------------------------------------------------------

#pragma hdrstop

#include "TestPackage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma comment(lib, "Security2")
#include "ISecurity2.h"
#include "Vcl.Dialogs.hpp"

int TestPackage::Sum(int a, int b)
{
  UL::ISecurity2* sec = UL::ISecurity2::Create(UL::Features::FUnilink);
  if(!sec || !sec->IsKeyPresent())
  {
      ShowMessage("invalid");
  }
  // this is a major change that needs to be tested on a branch
  ShowMessage("valid");
}
