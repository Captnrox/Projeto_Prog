#ifndef prog_Image_hpp
#define prog_Image_hpp

#include <vector>
#include "Color.hpp"

namespace prog
{
  class Image
  {
  private:
      std::vector<std::vector<Color>> Image_;
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
