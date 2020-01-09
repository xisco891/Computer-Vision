
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <fstream>
#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/core.hpp>
#include <iostream>
#include <opencv2/imgcodecs.hpp>

#include <iostream>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
//#include "opticalflow.h"
#include "stdio.h"
#include <iostream>
#include <eigen3/Eigen/Dense>
#include "CVision.h"

using namespace Eigen;



#undef _GLIBCXX_DEBUG
#include <stdio.h>
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/calib3d/calib3d.hpp"

#include <vector>

using namespace cv;
using namespace std;




int main(){
	CVision det;
	vector<Mat> img;
	char path[200];
	Mat channel;
	Mat channels[3];
	string windows[4] = {"Raw Image 1",
						"Raw Image 2",
						"Raw Image 3",
						"Raw Image 4"};

	cout<<"HELLO"<<endl;
	for(int i=1; i<5;i++){

		sprintf(path, "/home/xisco/Escritorio/CVISION/PROJECTS/BUILDING_OUTLINES/RawImage%d.jpg", i);
		split(imread(path),channels);
		channel = channels[0];
		img.push_back(channel);

	}

	det.loadImages(img);
	det.Menu();

}



