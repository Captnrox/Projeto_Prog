#include "Image.hpp"

namespace prog
{
  Image::Image(int w, int h, const Color &fill){
    this->w_ = w;
    this->h_ = h;
    Image_.resize(w_);
    for(int i = 0; i < w_; i++){
      Image_[i].resize(h_,fill);
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
    return this->Image_.at(x).at(y);
  }
}
