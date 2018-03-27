#include <cstdint>

#include <Magick++/Blob.h>
#include <Magick++/Image.h>

#include "utils.cc"

#if _XOPEN_SOURCE >= 600 || defined (_ISOC99_SOURCE)
#define ISFINITE(x) isfinite (x)
#else
#define ISFINITE(x) ((x) * (x) >= 0.) /* check for NaNs */
#endif

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  if (Size < sizeof(double)) {
    return 0;
  }
  double Degrees = *reinterpret_cast<const double *>(Data);
  //if (!isfinite(Degrees)) {
  if (!ISFINITE(Degrees)) {
    return 0;
  }
  const Magick::Blob blob(Data + sizeof(Degrees), Size - sizeof(Degrees));
  Magick::Image image;
  try {
    image.read(blob);
    image.rotate(Degrees);
  } catch (Magick::Exception &e) {
    return 0;
  }
  return 0;
}

#include "travis.cc"
