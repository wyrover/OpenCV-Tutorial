//
//  ContourDetectionSample.h
//  OpenCV Tutorial
//
//  Created by BloodAxe on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef OpenCV_Tutorial_ContourDetectionSample_h
#define OpenCV_Tutorial_ContourDetectionSample_h

#include "SampleBase.h"

class ContourDetectionSample : public SampleBase
{
  //! Gets a sample name
  virtual std::string getName() const;
  
  //! Returns a detailed sample description
  virtual std::string getDescription() const;
  
  //! Returns true if this sample requires setting a reference image for latter use
  virtual bool isReferenceFrameRequired() const;
  
  //! Sets the reference frame for latter processing
  virtual void setReferenceFrame(const cv::Mat& reference);
  
  //! Processes a frame and returns output image 
  virtual bool processFrame(const cv::Mat& inputFrame, cv::Mat& outputFrame);

};

#endif