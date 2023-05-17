#ifndef __prog_Image_hpp__
#define __prog_Image_hpp__

<<<<<<< HEAD
#include <unordered_map>
=======
>>>>>>> 312ea1e9be22d14c93161905506989a77ba21689
#include <vector>
#include "Color.hpp"

namespace prog
{
  class Image
  {
  private:
<<<<<<< HEAD
      std::vector<std::vector<Color>> Image_;
=======
      std::vector<std::vector<Color&>> Image_;
>>>>>>> 312ea1e9be22d14c93161905506989a77ba21689
      int w_;
      int h_;
  public:
    Image(int w, int h, const Color& fill = {255, 255, 255});
    ~Image();
    int width() const;
    int height() const;
    Color &at(int x, int y);
    const Color &at(int x, int y) const;
  };
}
#endif
