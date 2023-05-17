#include "Image.hpp"

namespace prog
{
  Image::Image(int w, int h, const Color &fill){
      this->w_ = w;
      this->h_ = h;
      for(int i = 0; i < w; i++){
          for(int o= 0; o < h; o++){
              this->Image_.at(i).at(o) = fill;
          }
      }
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
    return this->Image_.at(x).at(y);
  }

  const Color& Image::at(int x, int y) const{
    Color DUMMY_color = this->Image_.at(x).at(y);
    return DUMMY_color;
  }
}
