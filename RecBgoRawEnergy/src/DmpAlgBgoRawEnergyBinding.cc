#include <boost/python.hpp>
#include "DmpAlgBgoRawEnergy.h"

BOOST_PYTHON_MODULE(libDmpAlgBgoRawEnergy){
  using namespace boost::python;

  class_<DmpAlgBgoRawEnergy,boost::noncopyable,bases<DmpVAlg> >("DmpAlgBgoRawEnergy",init<>());
}
