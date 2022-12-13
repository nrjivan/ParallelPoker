#include <vector>
#include <string>

class Position {
public:
   Position();
   virtual ~Position();
   virtual double value() = 0; 
   
   virtual std::vector<Position *> *neighbors() = 0; 
   virtual std::string show() = 0;
};

Position* hillclimb(Position* posn, const int numSteps);
