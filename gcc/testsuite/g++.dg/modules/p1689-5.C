// { dg-additional-options -E }
// { dg-additional-options -MT }
// { dg-additional-options p1689-5.json }
// { dg-additional-options -MD }
// { dg-additional-options -fmodules-ts }
// { dg-additional-options -fdeps-format=p1689r5 }
// { dg-additional-options -fdeps-target=p1689-5.o }
// { dg-additional-options -fdeps-file=p1689-5.json }

// Use modules, don't provide anything.

import bar;

// { dg-final { run-check-p1689-valid p1689-5.json p1689-5.exp.json } }
