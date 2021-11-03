### 说明
本代码是https://blog.csdn.net/qq_34124780/article/details/121079317#commentBox完整实现代码 
但是存在问题按照代码运行起来，但是检测zidane.jpg发现，C++的领带没有检测出来。而且python运行结果精度要比这个代码精度高 
希望有大佬出来解决这个问题，这个版本是yolov5-6.0导出yolov5s onnx。
### 如何运行
#### （1）下载yolov5源码和权重 
转换：python export.py --weights yolov5s.pt --img 640 --batch 1  # export at 640x640 with batch size 1 
##### （2）修改CMakeLists.txt中opencv路径，我使用的opencv4.5.4版本 
##### （3）修改main.cpp中onnx路径和图片路径 
##### （4）编译 
mkdir build 
cd build 
cmake .. 
make 
####  （5）运行 
./yolo
