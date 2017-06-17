add_library (src 
  Math.h
  Math.cpp)

install (TARGETS src DESTINATION bin)
install (FILES Math.h DESTINATION include)
