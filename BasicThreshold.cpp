#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace cv; 
int main( int argc, char** argv )
{
	// Read image
	Mat src = imread("circles2.jpg", IMREAD_GRAYSCALE);
	Mat dst;
	 
	// Set threshold and maxValue
	double thresh = 120;
	double maxValue = 255; 
	 
	// Binary Threshold
	threshold( src, dst, thresh, maxValue, THRESH_BINARY);

	// Binary Threshold Invert
	// threshold( src, dst, thresh, maxValue, THRESH_BINARY_INV);

	// Truncate Threshold
	// threshold( src, dst, thresh, maxValue, THRESH_TRUNC);

	// Threshold to Zero
	// threshold( src, dst, thresh, maxValue, THRESH_TOZERO);

	// Inverted Threshold to Zero
	// threshold(src,dst, thresh, maxValue, THRESH_TOZERO_INV);

	namedWindow("Image Demo", CV_WINDOW_AUTOSIZE );
	namedWindow("Image Threshold Demo", CV_WINDOW_AUTOSIZE );

	imshow( "Image Demo", src );
	imshow( "Image Threshold Demo", dst );
	waitKey(0);
}
