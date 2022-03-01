#include <pybind11/embed.h>
#include <pybind11/stl.h>

#include <matplotlibcpp17/pyplot.h>

#include <vector>

using namespace pybind11::literals;

int main() {
  pybind11::scoped_interpreter guard{};
  auto plt = matplotlibcpp17::pyplot::import();
  /// user code
  plt.plot(Args(std::vector<int>({1, 3, 2, 4})),
           Kwargs("color"_a = "blue", "linewidth"_a = 1.0));
  plt.show();
}
