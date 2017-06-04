#include "atlas/object-id.h"

ObjectId::ObjectId(){
  descriptor_ = 1234;
}

void ObjectId::setId(int descriptor){
  descriptor_ = descriptor;
}
