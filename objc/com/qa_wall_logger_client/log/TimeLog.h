//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/com/qa_wall_logger_client/log/TimeLog.java
//

#ifndef _QA_Wall_TimeLog_H_
#define _QA_Wall_TimeLog_H_

@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "com/qa_wall_logger_client/log/Log.h"

@interface QA_Wall_TimeLog : NSObject < QA_Wall_Log > {
}

/**
 @param logMsg a message to identify the com.qa_wall_logger_client.log
 @param timeStart Epoch (milliseconds since 1 jan 1970)  when the event started
 @param timeEnd Epoch (milliseconds since 1 jan 1970) when the event ended
 */
- (instancetype)initWithNSString:(NSString *)logMsg
                        withLong:(jlong)timeStart
                        withLong:(jlong)timeEnd;

- (id<JavaUtilList>)getUrlPaths;

- (NSString *)getLogMsg;

- (jlong)getTimeStart;

- (jlong)getTimeEnd;

@end

J2OBJC_EMPTY_STATIC_INIT(QA_Wall_TimeLog)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

typedef QA_Wall_TimeLog ComQa_wall_logger_clientLogTimeLog;

J2OBJC_TYPE_LITERAL_HEADER(QA_Wall_TimeLog)

#endif // _QA_Wall_TimeLog_H_