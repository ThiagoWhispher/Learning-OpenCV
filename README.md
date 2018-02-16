## *Main parts of the PDF (Image digital processing)*
1. **Introduction**
    1. **What is Digital Image Processing?**
        * An image may be defined as a two-dimensional function *f(x,y)*, where *x* and *y* are spatial (plane) coordinates, and the amplitude of *f* at any pair of coordinates *(x,y)* is called the *intensity* or *gray level* of the image at that point. When *x, y*, and the amplitude values of *f* are all finite, discrete quantities, we call the image a *digital image*.
        * *Pixel* (each of which has a particular location and value) is the term most widely used to denote the elements of digital image.
        *Vision* is the most advanced of our senses, [...]. However, unlike humans, who are limited to the visual band of the electromagnetic spectrum [...]
        * One useful paradigm is to consided three types of computerized processes in the continuum: *low-, mid-, and high-level processes*.
	        * Low-level process: involve primitive operations such as image preprocessing to reduce noise, contrast enhancement, and image sharpening. (inputs and outputs are images).
	        * Mid-level process: involves tasks such as segmentation (partitioning an image into regions or objects), description of those objects to reduce them to a form suitable for computer processing, and classification (recognition) of individual objects. (Inputs - images, outputs are attributes extracted from those images: contours, edges, and the indentity of individual objects).
	        * High-level processing: involves "making sense" of an ensemble of recognized objects, as in image analysis, and, at the far end of the continuum, performing the cognitive functions normally associated with vision.
	2. **The Origins of Digital Image Processing**

## *Main parts of the PDF (Learning OpenCV)*
1. **Overview**
	1. **What is OpenCV?**
        * OpenCV is an open source computer vision library [...], written in C and C++. The library was designed for computational efficiency and with a strong focus on real-time applications.
        * One of OpenCV’s goals is to provide a simple-to-use computer vision infrastructure that helps people build fairly sophisticated vision applications quickly. Th e OpenCV library contains over 500 functions that span many areas in vision, including factory product inspection, medical imaging, security, user interface, camera calibration, stereo vision, and robotics.
	2. **Who uses OpenCV?**
        * The open source license for OpenCV has been structured such that you can build a commercial product using all or part of OpenCV. [...] In part because of these liberal licensing terms, there is a large user community that includes people from major companies (IBM, Microsoft , Intel, SONY, Siemens, and Google, to name only a few) and research centers (such as Stanford, MIT, CMU, Cambridge, and INRIA). OpenCV is popular around the world, with large user communities in China, Japan, Russia, Europe, and Israel.
            * Yahoo group (OpenCV): [Link here](http://groups.yahoo.com/group/OpenCV)

## *OpenCV Library*
1. **Includes**
    * core section, as here are defined the basic building blocks of the library.
        * Example: *#include <opencv2/core.hpp>*
    * highgui module, as this contains the functions for input and output operations.
        * Example: *#include <opencv2/highgui.hpp> ]*
    * iostream - to facilitate console line output and input.
        * Example: *#include <iostream>*

2. **Methods**
    * **imread** - function which loads the image name specified.
        * Example:  *imread(<path image>, <format image>)*
        * First argument - path image
        * Second argument - specifies the format in what want the image
            * **IMREAD_UNCHANGED** (<0) loads the image as is (including the alpha channel if present)
            * **IMREAD_GRAYSCALE** ( 0) loads the image as an intensity one
            * **IMREAD_COLOR** (>0) loads the image in the RGB format
    * **namedWindows** - create an OpenCV window.
        * Example: *namedWindows(<windows name>, <windows propriety>)*
        * First argument - Windows name
        * Second argument - Windows propriety
            * **WINDOW_AUTOSIZE** - only supported one if you do not use the Qt backend. In this case the window size will take up the size of the image it shows and no resize permitted.
            * **WINDOW_NORMAL** - on Qt you may use this to allow window resize. The image will resize itself according to the current window size. By using the | operator you also need to specify if you would like the image to keep its aspect ratio (*WINDOW_KEEPRATIO*) or not (*WINDOW_FREERATIO*).
    * **imshow** - update the content of the OpenCV window with a new image.
        * Example: *imshow(<windows name>, <image>)*
    * **waitKey** - function that displays a window until the user presses a key (0) or up to x measure of milliseconds (x).
        * Example: *waitKey(0 or x)*

3. **Objects**
    * **Mat** - object that will store the data of the loaded image.
        * Example: Mat <variable name>

4. **Observations**
    1. To avoid data structure and function name conflicts with other libraries, OpenCV has its own namespace: cv.
        * *using namespace cv*