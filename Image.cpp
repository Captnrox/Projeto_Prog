#include "Image.hpp"

namespace prog
{
<<<<<<< HEAD
  Image::Image(int w, int h, const Color& fill){
      this->w_ = w;
      this->h_ = h;

      std::vector<Color> temp(w, fill);
      this->Image_ = std::vector<std::vector<Color>>(h, temp);
=======
  Image::Image(int w, int h, const Color &fill){
    this->w_ = w;
    this->h_ = h;
    Image_.resize(w_);
    for(int i = 0; i < w_; i++){
      Image_[i].resize(h_,fill);
    }
>>>>>>> 312ea1e9be22d14c93161905506989a77ba21689
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
