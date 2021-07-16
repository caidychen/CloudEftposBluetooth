//
//  CloudLog.h
//  CloudEftposSDK
//
//  Created by Tom Graham on 17/5/19.
//  Copyright © 2019 Quest Payment Systems. All rights reserved.
//

#ifndef CloudLog_h
#define CloudLog_h


@interface CloudLog : NSObject

+(void)Log:(NSString *)level module:(NSString *)module message:(NSString *)message, ...;
+(void)Log:(NSString *)level module:(NSString *)module direction:(NSString *)direction message:(NSString *)message, ...;

@end

#endif /* CloudLog_h */
