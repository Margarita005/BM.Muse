// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from packets.djinni

#import <Foundation/Foundation.h>

/**
 * \if IOS_ONLY
 * \file
 * \endif
 * Represents the data mapping in an Accelerometer data packet
 * \if ANDROID_ONLY
 * \sa com.choosemuse.libmuse.MuseDataPacketType.ACCELEROMETER
 * \sa com.choosemuse.libmuse.MuseDataPacket.getAccelerometerValue()
 * \endif
 * \if IOS_ONLY
 * \sa \link IXNMuseDataPacketType::IXNMuseDataPacketTypeAccelerometer IXNMuseDataPacketTypeAccelerometer\endlink
 * \sa IXNMuseDataPacket::getAccelerometerValue:
 * \endif
 */
typedef NS_ENUM(NSInteger, IXNAccelerometer)
{
    /** Forward/Backward axis value in milliG */
    IXNAccelerometerForwardBackward,
    /** Up/Down axis value in milliG */
    IXNAccelerometerUpDown,
    /** Left/Right axis value in milliG */
    IXNAccelerometerLeftRight,
};