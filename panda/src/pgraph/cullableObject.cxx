// Filename: cullableObject.cxx
// Created by:  drose (04Mar02)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) 2001, Disney Enterprises, Inc.  All rights reserved
//
// All use of this software is subject to the terms of the Panda 3d
// Software license.  You should have received a copy of this license
// along with this source code; you will also find a current copy of
// the license at http://www.panda3d.org/license.txt .
//
// To contact the maintainers of this program write to
// panda3d@yahoogroups.com .
//
////////////////////////////////////////////////////////////////////

#include "cullableObject.h"


TypeHandle CullableObject::_type_handle;

////////////////////////////////////////////////////////////////////
//     Function: CullableObject::Destructor
//       Access: Public
//  Description: Automatically deletes the whole chain of these things.
////////////////////////////////////////////////////////////////////
CullableObject::
~CullableObject() {
  if (_next != (CullableObject *)NULL) {
    delete _next;
  }
}

////////////////////////////////////////////////////////////////////
//     Function: CullableObject::output
//       Access: Public
//  Description: 
////////////////////////////////////////////////////////////////////
void CullableObject::
output(ostream &out) const {
  if (_geom != (Geom *)NULL) {
    out << *_geom;
  } else {
    out << "(null)";
  }
}
