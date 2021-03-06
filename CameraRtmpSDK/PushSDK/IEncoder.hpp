//
//  IEncoder.hpp
//  CameraRtmpSDK
//
//  Created by Abson on 16/9/6.
//  Copyright © 2016年 Abson. All rights reserved.
//

#ifndef IEncoder_hpp
#define IEncoder_hpp

#include "ITransform.hpp"

namespace push_sdk {

    class IEncoder : public ITransform
    {
    public:
        virtual ~IEncoder() {};

        virtual void set_bitrate(int bitrate) = 0;
        virtual const int bitrate() const = 0;
    };
}


#endif /* IEncoder_hpp */
