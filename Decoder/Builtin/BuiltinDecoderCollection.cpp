//
//
//    SymbolInverterFactory.h: Make symbol inverters
//    Copyright (C) 2019 Gonzalo José Carracedo Carballal
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU Lesser General Public License as
//    published by the Free Software Foundation, either version 3 of the
//    License, or (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful, but
//    WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU Lesser General Public License for more details.
//
//    You should have received a copy of the GNU Lesser General Public
//    License along with this program.  If not, see
//    <http://www.gnu.org/licenses/>
//

#include <Suscan/Library.h>

#include <BuiltinDecoderCollection.h>

#include "SymbolInverterFactory.h"
#include "HexTapFactory.h"

using namespace SigDigger;

BuiltinDecoderCollection::BuiltinDecoderCollection()
{
  Suscan::Singleton *sus = Suscan::Singleton::get_instance();

  sus->registerDecoderFactory(new SymbolInverterFactory());
  sus->registerDecoderFactory(new HexTapFactory());
}