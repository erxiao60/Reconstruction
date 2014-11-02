#include <boost/python.hpp>
#include "DmpAlgBgoClusters.h"

BOOST_PYTHON_MODULE(libDmpAlgBgoClusters){
  using namespace boost::python;

  class_<DmpAlgBgoClusters,boost::noncopyable,bases<DmpVAlg> >("DmpAlgBgoClusters",init<>());
}
