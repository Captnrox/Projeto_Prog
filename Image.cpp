#include "Image.hpp"

namespace prog
{
  Image::Image(int w, int h, const Color& fill){
      this->w_ = w;
      this->h_ = h;

      std::vector<Color> temp(w, fill);
      this->Image_ = std::vector<std::vector<Color>>(h, temp);
  }

  Image::~Image(){

  }
  int Image::width() const{
    return this->w_;
  }

  int Image::height() const{
    return this->h_;
  }

  Color& Image::at(int x, int y){
    return this->Image_.at(y).at(x);
  }

  const Color& Image::at(int x, int y) const{
    return this->Image_.at(y).at(x);
  }
}
