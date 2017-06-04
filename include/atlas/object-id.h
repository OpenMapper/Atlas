#ifndef OBJECT_ID_
#define OBJECT_ID_

class ObjectId {
 public:
  ObjectId();
  void setId(int descriptor);
 protected:
  int descriptor_;
};

#endif  // OBJECT_ID_
